#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string a;
    cin >> a;
    int i = a.length() - 1;
    while (a[i] == '0' && i >= 0)
    {
        a[i] = '1';
        i--;
    }
    if (i >= 0)
        a[i] = '0';
    cout << a;
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