#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> b;
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
        b.push_back(a);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    selectionSort(a);
    for (int i = b.size() - 1; i >= 0; --i)
    {
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (auto x : b[i])
            cout << x << " ";
        cout << endl;
    }
}