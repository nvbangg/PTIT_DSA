#include <bits/stdc++.h>
using namespace std;
void xau_nhiphan(int n)
{
    string a(n, 'A');
    while (1)
    {
        if (a.find("HH") == -1)
            cout << "HA" << a << "A\n";
        int i = n - 1;
        while (a[i] == 'H' && i >= 0)
            a[i--] = 'A';
        if (i < 0)
            break;
        a[i] = 'H';
    }
}
void TestCase()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << "HA\n";
        return;
    }
    n -= 3;
    xau_nhiphan(n);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}