#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
{
    int n, x, res;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i)
    {
        int tmp;
        cin >> tmp;
        if (tmp == x)
            res = i;
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}