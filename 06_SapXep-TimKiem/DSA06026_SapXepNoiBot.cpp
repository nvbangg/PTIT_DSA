#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool check_sorted = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                check_sorted = false;
            }
        }
        if (check_sorted)
            break;
        cout << "Buoc " << i + 1 << ": ";
        for (auto x : a)
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    bubbleSort(a);
}