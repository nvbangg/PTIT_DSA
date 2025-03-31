#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k + 1);
    for (int i = 1; i <= k; ++i)
    {
        cin >> a[i];
    }
    int i = k;
    while (a[i] == n - k + i && i > 0)
        i--;
    if (i > 0)
    {
        a[i]++;
        for (int j = i + 1; j <= k; ++j)
            a[j] = a[i] + j - i;
        for (int j = 1; j <= k; ++j)
            cout << a[j] << " ";
        cout << endl;
    }
    else
    {
        for (int j = 1; j <= k; ++j)
            cout << j << " ";
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}