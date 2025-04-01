#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
vector<string> v;
void out()
{
    for (int i = 1; i <= k; ++i)
        cout << v[a[i] - 1] << " ";
    cout << endl;
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            out();
        else
            Try(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    string s;
    map<string, bool> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        mp[s] = 1;
    }
    for (auto x : mp)
        if (x.second)
            v.push_back(x.first);
    a.resize(k + 1);
    a[0] = 0;
    n = v.size();
    Try(1);
}
