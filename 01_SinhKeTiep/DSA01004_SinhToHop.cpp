#include <bits/stdc++.h>
using namespace std;

void TestCase()
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
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        TestCase();
        cout << "\n";
    }
    return 0;
}