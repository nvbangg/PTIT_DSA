#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

int linearSearch(const vector<int> &array, int target)
{
    for (int i = 0; i < array.size(); i++)
        if (array[i] == target)
            return i;
    return -1;
}

int binarySearch(const vector<int> &array, int target)
{
    int left = 0, right = array.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (array[mid] == target)
            return mid;
        if (array[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int ternarySearch(const vector<int> &array, int target)
{
    int left = 0, right = array.size() - 1;
    while (right >= left)
    {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        if (array[mid1] == target)
            return mid1;
        if (array[mid2] == target)
            return mid2;
        if (target < array[mid1])
            right = mid1 - 1;
        else if (target > array[mid2])
            left = mid2 + 1;
        else
        {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    return -1;
}

int interpolationSearch(const vector<int> &array, int target)
{
    int low = 0, high = array.size() - 1;
    while (low <= high && target >= array[low] && target <= array[high])
    {
        if (low == high)
        {
            if (array[low] == target)
                return low;
            return -1;
        }
        int pos = low + (((double)(high - low) / (array[high] - array[low])) * (target - array[low]));
        if (pos < 0 || pos >= array.size())
            return -1;
        if (array[pos] == target)
            return pos;
        if (array[pos] < target)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}

int fibonacciSearch(const vector<int> &array, int target)
{
    int size = array.size();
    int fib_m_minus_2 = 0;
    int fib_m_minus_1 = 1;
    int fib_m = fib_m_minus_2 + fib_m_minus_1;

    while (fib_m < size)
    {
        fib_m_minus_2 = fib_m_minus_1;
        fib_m_minus_1 = fib_m;
        fib_m = fib_m_minus_2 + fib_m_minus_1;
    }

    int offset = -1;
    while (fib_m > 1)
    {
        int index = min(offset + fib_m_minus_2, size - 1);
        if (array[index] < target)
        {
            fib_m = fib_m_minus_1;
            fib_m_minus_1 = fib_m_minus_2;
            fib_m_minus_2 = fib_m - fib_m_minus_1;
            offset = index;
        }
        else if (array[index] > target)
        {
            fib_m = fib_m_minus_2;
            fib_m_minus_1 = fib_m_minus_1 - fib_m_minus_2;
            fib_m_minus_2 = fib_m - fib_m_minus_1;
        }
        else
            return index;
    }

    if (fib_m_minus_1 && offset + 1 < size && array[offset + 1] == target)
        return offset + 1;
    return -1;
}

double doTime(function<int(const vector<int> &, int)> search_func,
              const vector<int> &array, int target, int num_searches)
{
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < num_searches; i++)
    {
        search_func(array, target);
    }
    auto end = chrono::high_resolution_clock::now();
    return chrono::duration<double, milli>(end - start).count() / num_searches;
}

int main()
{
    const int max_size = 10000;
    const int num_searches = 1000;
    vector<int> array(max_size);

    for (int i = 0; i < max_size; i++)
        array[i] = rand() % 10000 + 1;
    sort(array.begin(), array.end());

    vector<int> test_sizes = {100, 1000, 5000, 10000};
    vector<string> algorithm_names = {"Linear", "Binary", "Ternary", "Interpolation", "Fibonacci"};
    vector<function<int(const vector<int> &, int)>> search_functions = {
        linearSearch, binarySearch, ternarySearch, interpolationSearch, fibonacciSearch};

    vector<int> search_targets(num_searches);
    for (int i = 0; i < num_searches; i++)
    {
        search_targets[i] = array[rand() % max_size];
    }

    cout << "Thoi gian thuc thi trung binh (mili giay) voi cung 1 day so ("
         << num_searches << " lan tim kiem):\n";
    cout << "-------------------------------------------------------------\n";
    cout << setw(8) << "n";
    for (auto &name : algorithm_names)
        cout << setw(15) << name;
    cout << "\n-------------------------------------------------------------\n";

    for (int size : test_sizes)
    {
        vector<int> sub_array(array.begin(), array.begin() + size);
        cout << setw(8) << size;
        for (size_t i = 0; i < search_functions.size(); i++)
        {
            double total_time = 0;
            for (int j = 0; j < num_searches; j++)
            {
                total_time += doTime(search_functions[i], sub_array, search_targets[j], 1);
            }
            cout << setw(15) << fixed << setprecision(6) << total_time / num_searches;
        }
        cout << "\n";
    }
    cout << "-------------------------------------------------------------\n";

    return 0;
}
