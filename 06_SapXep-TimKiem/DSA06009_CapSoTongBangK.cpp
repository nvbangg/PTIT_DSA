#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, k, res = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
            if (a[i] + a[j] == k)
                res++;
    }
    cout << res << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}