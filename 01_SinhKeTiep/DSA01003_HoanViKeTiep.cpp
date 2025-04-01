#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x: a)
        cin >> x;
    int i = n - 2;
    while(a[i] > a[i+1] && i >= 0)
        i--;
    if (i >= 0)
    {
        int k = n - 1;
        while(a[k] < a[i])
            k--;
        swap(a[k], a[i]);
        reverse(a + i + 1, a + n);
    }
    else
        reverse(a, a + n);
    for (auto x: a)
        cout << x << " ";
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