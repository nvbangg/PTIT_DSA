#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void tohop(int n, int k, int s)
{
    vector<int> a(n, 0);
    int res = 0;
    fill(a.begin(), a.begin() + k, 1);
    do
    {
        int sum = 0;
        for (int i = 0; i < n; ++i)
            if (a[i])
                sum += i + 1;
        if (sum == s)
            res++;
    } while (prev_permutation(a.begin(), a.end()));
    cout << res << endl;
}
int Case()
{
    int n, k, s;
    while (1)
    {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
            break;
        tohop(n, k, s);
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    Case();
    return 0;
}