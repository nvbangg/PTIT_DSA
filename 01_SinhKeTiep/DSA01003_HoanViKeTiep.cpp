#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    int i = n - 2;
    while (a[i] > a[i + 1] && i >= 0)
        i--;
    if (i >= 0)
    {
        int k = n - 1;
        while (a[k] < a[i])
            k--;
        swap(a[k], a[i]);
        reverse(a + i + 1, a + n);
    }
    else
        reverse(a, a + n);
    for (auto x : a)
        cout << x << " ";
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}