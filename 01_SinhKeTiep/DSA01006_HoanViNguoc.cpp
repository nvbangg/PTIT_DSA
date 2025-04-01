#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        a[i] = n - i;
    while (1)
    {
        for (auto x : a)
            cout << x;
        cout << " ";
        int i = n - 2, k = n - 1;
        while (a[i] < a[i + 1] && i >= 0)
            i--;
        if (i < 0)
            break;
        while (a[k] > a[i])
            k--;
        swap(a[i], a[k]);
        reverse(a + i + 1, a + n);
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