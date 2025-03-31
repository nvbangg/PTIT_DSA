#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    long long ans = 0;
    for (int i = 0; i < n; ++i)
        ans += lower_bound(a.begin() + i + 1, a.end(), a[i] + k) - (a.begin() + i + 1);
    cout << ans << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}