#include <bits/stdc++.h>
using namespace std;
int n, ok = 1;
vector<int> a;
void init()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i)
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

    int i = n - 2, k = n - 1;
    while (a[i] > a[i + 1] && i >= 0)
        i--;
    if (i < 0)
    {
        ok = 0;
        return;
    }
    while (a[k] < a[i])
        k--;
    swap(a[i], a[k]);
    reverse(a.begin() + i + 1, a.end());
}
void hoanvi()
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
        hoanvi();
        cout << endl;
    }
}