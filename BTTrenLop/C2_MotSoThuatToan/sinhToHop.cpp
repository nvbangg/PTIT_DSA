#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

int n, k, ok;
vector<int> a;

void init()
{
    ok = 1;
    cin >> n >> k;
    a.resize(k + 1);
    for (int i = 1; i <= k; i++)
        a[i] = i;
}

void result()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}

void sinh()
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i == 0)
    {
        ok = 0;
        return;
    }
    a[i]++;
    for (int j = i + 1; j <= k; j++)
        a[j] = a[j - 1] + 1;
}

void Case()
{
    init();
    while (ok)
    {
        result();
        sinh();
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}
