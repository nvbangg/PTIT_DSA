#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
{
    int n, k;
    cin >> n >> k;
    int a[k + 1];
    for (int i = 1; i <= k; ++i)
        a[i] = i;
    while (1)
    {
        for (int i = 1; i <= k; ++i)
            cout << a[i];
        cout << " ";
        int i = k;
        while (a[i] == n - k + i && i > 0)
            i--;
        if (i == 0)
            break;
        a[i]++;
        for (int j = i + 1; j <= k; ++j)
            a[j] = a[i] + j - i;
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}