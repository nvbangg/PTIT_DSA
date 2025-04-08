#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
{
    int n;
    cin >> n;
    vector<bool> mark(10, 0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        while (x)
        {
            mark[x % 10] = true;
            x /= 10;
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        if (mark[i])
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}