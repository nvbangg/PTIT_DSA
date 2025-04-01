#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    for (int i = 1; i <= n; ++i)
    {
        int left = a[i - 1];
        int right = a[n] - a[i];
        if (left == right)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}