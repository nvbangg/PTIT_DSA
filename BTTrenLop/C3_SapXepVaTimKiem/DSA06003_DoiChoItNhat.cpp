#include <bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; ++i)
    {
        int idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[i])
                idx = j;
        }
        swap(a[i], a[idx]);
    }
}
void TestCase()
{
    int n, res = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> b = a;
    selection_sort(b);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}