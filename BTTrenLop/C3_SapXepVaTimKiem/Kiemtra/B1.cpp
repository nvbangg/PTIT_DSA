#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c, l;
    for (auto &x : a)
    {
        cin >> x;
        if (x % 2 == 0)
            c.push_back(x);
        else
            l.push_back(x);
    }
    sort(c.rbegin(), c.rend());
    sort(l.begin(), l.end());
    int dc = 0, dl = 0;
    for (auto x : a)
    {
        if (x % 2 == 0)
            cout << c[dc++] << " ";
        else
            cout << l[dl++] << " ";
    }

    return 0;
}