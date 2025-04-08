#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

bool cmp(int u, int v)
{
    if (u < 0 && v >= 0)
        return 1;
    return 0;
}
void Case()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int ma = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > ma)
            ma = a[i];
    }
    int idx = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == ma)
        {
            idx = i;
            break;
        }
    }
    a.insert(a.begin() + idx, m);
    stable_sort(a.begin(), a.end(), cmp);
    for (auto x : a)
        cout << x << " ";
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}