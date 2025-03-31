#include <bits/stdc++.h>
using namespace std;
void xau_nhiphan(int n)
{
    vector<char> a(n, 'A');
    while (1)
    {
        for (auto x : a)
            cout << x;
        cout << " ";
        int i = n - 1;
        while (a[i] == 'B' && i >= 0)
            a[i--] = 'A';
        if (i < 0)
            break;
        a[i] = 'B';
    }
}
void TestCase()
{
    int n;
    cin >> n;
    xau_nhiphan(n);
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