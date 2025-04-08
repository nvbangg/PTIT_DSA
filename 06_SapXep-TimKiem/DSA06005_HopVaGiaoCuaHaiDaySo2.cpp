#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
{
    int n, m, x;
    cin >> n >> m;

    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> x;
        mp[x]++;
    }

    for (auto i : mp)
    {
        cout << i.first << " ";
    }
    cout << endl;
    for (auto i : mp)
    {
        if (i.second >= 2)
            cout << i.first << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}