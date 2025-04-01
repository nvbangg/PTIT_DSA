#include <bits/stdc++.h>
using namespace std;
void tohop_next(vector<int> a, int n)
{
    vector<int> b(n, 0);
    for (int i : a)
        b[i - 1] = 1;
    prev_permutation(b.begin(), b.end());
    for (int i = 0; i < n; ++i)
        if (b[i])
            cout << i + 1;
    cout << endl;
}
void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[k + 1];
    for (int i = 1; i <= k; ++i)
        cin >> a[i];
    int i = k;
    while (a[i] == n - k + i && i > 0)
        i--;
    if (i == 0)
        a[i] = 0;
    else
        a[i]++;
    for (int j = i + 1; j <= k; ++j)
        a[j] = a[i] + j - i;
    for (int i = 1; i <= k; ++i)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}