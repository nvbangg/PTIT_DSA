#include <bits/stdc++.h>
using namespace std;
vector<int> a, x;
int ok = 1, n, k;
void init()
{
    cin >> n >> k;
    a.resize(k + 1);
    for (int i = 1; i <= k; ++i)
        a[i] = i;
}
void result()
{
    for (int i = 1; i <= k; ++i)
        cout << a[i];
    cout << " ";
}
void sinh()
{
    int i = k;
    while (a[i] == n - k + i && i >= 1)
    {
        i--;
    }
    if (i < 1)
        ok = 0;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; ++j)
            a[j] = a[i] + j - i;
    }
}
void TestCase()
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}