#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

int n, res;
vector<int> a;
vector<bool> cot, cheoPhu, cheo;

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!cot[j] && !cheoPhu[i + j - 1] && !cheo[i - j + n])
        {
            a[i] = j;
            cot[j] = cheoPhu[i + j - 1] = cheo[i - j + n] = true;

            if (i == n)
                res++;
            else
                Try(i + 1);

            cot[j] = cheoPhu[i + j - 1] = cheo[i - j + n] = false;
        }
    }
}

void Case()
{
    cin >> n;
    res = 0;
    a.resize(n + 1);
    cot.resize(n + 1, false);
    cheoPhu.resize(2 * n, false);
    cheo.resize(2 * n, false);

    Try(1);
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}
