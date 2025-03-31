#include <bits/stdc++.h>
using namespace std;
int n, ok = 1;
vector<int> a;

void init()
{
    cin >> n;
    a.resize(n, 0);
}

void result()
{
    for (auto x : a)
        cout << x;
    cout << " ";
}

void sinh()
{
    int i = n - 1;
    while (i >= 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i < 0)
    {
        ok = 0;
        return;
    }
    a[i] = 1;
}

void nhiphan()
{
    init();
    while (ok)
    {
        result();
        sinh();
    }
    ok = 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhiphan();
        cout << endl;
    }
}