#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

int n, ok;
vector<int> a;
void init()
{
    ok = 1;
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
    while (a[i] == 1 && i >= 0)
        a[i--] = 0;
    if (i < 0)
    {
        ok = 0;
        return;
    }
    a[i] = 1;
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
