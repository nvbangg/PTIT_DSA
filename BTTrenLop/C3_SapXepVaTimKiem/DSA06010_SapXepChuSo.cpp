#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

vector<int> selection_sort(vector<int> a)
{
    int n = a.size();
    for (int i = 0; i < n; ++i)
    {
        int idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[i])
            {
                idx = j;
                swap(a[i], a[idx]);
            }
        }
    }
    return a;
}
void Case()
{
    int n;
    cin >> n;
    vector<int> a(n), res;
    for (int &x : a)
        cin >> x;
    for (int x : a)
    {
        while (x)
        {
            if (find(res.begin(), res.end(), x % 10) == res.end())
                res.push_back(x % 10);
            x /= 10;
        }
    }
    res = selection_sort(res);
    for (int x : a)
        cout << x << " ";
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}