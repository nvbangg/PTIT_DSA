#include <bits/stdc++.h>
using namespace std;
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
    selectionSort(a);
}