#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, bool> mp;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    for (auto x : a)
    {
        if (mp[x] == 0)
        {
            cout << x << " ";
            mp[x] = 1;
        }
    }
}