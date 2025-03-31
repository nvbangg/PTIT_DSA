#include <bits/stdc++.h>
using namespace std;
void TestCase()
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
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}