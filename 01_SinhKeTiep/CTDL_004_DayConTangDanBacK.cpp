#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void tohop(int n, int k, vector<int> &b)
{
    vector<int> a(n, 0);
    int res = 0;
    fill(a.begin(), a.begin() + k, 1);
    do
    {
        bool check = 1;
        int tmp = INT_MIN;
        for (int i = 0; i < n; ++i)
            if (a[i])
            {
                if (b[i] <= tmp)
                {
                    check = 0;
                    break;
                }
                tmp = b[i];
            }
        if (check)
            res++;

    } while (prev_permutation(a.begin(), a.end()));
    cout << res << endl;
}
int Case()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (auto &x : b)
        cin >> x;
    tohop(n, k, b);
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    Case();
    return 0;
}