#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

bool tuantu(vector<int> a, int x, int k)
{
    int n = a.size();
    for (int i = x + 1; i < n; ++i)
    {
        if (a[i] == k)
        {
            return 1;
        }
    }
    return 0;
}
void Case()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (tuantu(a, i, k - a[i]))
            cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}