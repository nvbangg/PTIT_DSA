#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

int tuantu(vector<int> a, int x)
{
    int n = a.size();
    int cnt = 1;
    for (int i = x + 1; i < n; ++i)
    {
        if (a[i] == a[x])
        {
            cnt++;
        }
    }
    return cnt;
}
void Case()
{
    int n, tmp, check = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        if (tuantu(a, i) > n / 2)
        {
            tmp = a[i];
            check = 1;
            break;
        }
    }
    if (check)
        cout << tmp << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}