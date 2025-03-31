#include <bits/stdc++.h>
using namespace std;
int n, k, ok = 1;
vector<int> a;

void init()
{
    cin >> n >> k;
    a.resize(k);
    for (int i = 0; i < k; ++i)
        a[i] = i + 1;
}

void result()
{
    for (auto x : a)
        cout << x;
    cout << " ";
}

void sinh()
{
    int i = k - 1;
    while (i >= 0 && a[i] == n - k + i + 1)
        i--;
    if (i < 0)
    {
        ok = 0;
        return;
    }
    a[i]++;
    for (int j = i + 1; j < k; ++j)
        a[j] = a[i] + j - i;
}

void tohop()
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
        tohop();
        cout << endl;
    }
}