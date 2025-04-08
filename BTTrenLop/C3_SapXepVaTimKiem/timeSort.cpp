#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void selectionSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);
    }
}

void insertionSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void bubbleSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int partition(vector<int> &a, int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

void merge(vector<int> &a, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(a.begin() + left, a.begin() + mid + 1);
    vector<int> R(a.begin() + mid + 1, a.begin() + right + 1);

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &a, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

// Gọi lại hàm chỉ có 1 tham số
void QuickSort(vector<int> &a)
{
    quickSort(a, 0, a.size() - 1);
}
void MergeSort(vector<int> &a)
{
    mergeSort(a, 0, a.size() - 1);
}

double doTime(auto sortFunc, vector<int> a)
{
    auto start = chrono::high_resolution_clock::now();
    sortFunc(a);
    auto end = chrono::high_resolution_clock::now();
    return chrono::duration<double, milli>(end - start).count();
}

int main()
{
    const int MAX_N = 10000;
    vector<int> arr(MAX_N);
    for (int i = 0; i < MAX_N; i++)
        arr[i] = rand() % 10000 + 1;

    vector<int> N = {100, 1000, 5000, 10000};
    vector<string> NameList = {"Select", "Insert", "Bubble", "Quick", "Merge"};
    auto FuncList = vector{selectionSort, insertionSort, bubbleSort, QuickSort, MergeSort};

    cout << "Thoi gian thuc thi (mili giay) voi cung 1 day so:";
    cout << "\n-------------------------------------------------------------\n";
    cout << setw(8) << "n";
    for (auto &name : NameList)
        cout << setw(10) << name;
    cout << "\n-------------------------------------------------------------\n";

    for (int n : N)
    {
        vector<int> a(arr.begin(), arr.begin() + n);
        cout << setw(8) << n;
        for (auto i = 0; i < FuncList.size(); i++)
        {
            double time = doTime(FuncList[i], a);
            cout << setw(10) << fixed << setprecision(2) << time;
        }
        cout << "\n";
    }
    cout << "-------------------------------------------------------------\n";

    return 0;
}