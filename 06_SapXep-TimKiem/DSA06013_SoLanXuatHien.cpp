#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
{
    int n, x;
    cin >> n >> x;
    vector<int> mark(1e6 + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        int j;
        cin >> j;
        mark[j]++;
    }
    if (mark[x])
        cout << mark[x] << endl;
    else
        cout << -1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}