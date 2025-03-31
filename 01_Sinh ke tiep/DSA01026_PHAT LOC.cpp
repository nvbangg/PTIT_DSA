#include <bits/stdc++.h>
using namespace std;
bool check(string &a)
{
    if (a[a.size() - 1] != '6')
        return 0;
    if (a.find("88") != -1)
        return 0;
    if (a.find("6666") != -1)
        return 0;
    return 1;
}
void xau_nhiphan(int n)
{
    string a(n, '6');
    a[0] = '8';
    while (1)
    {
        if (check(a))
            cout << a << endl;
        int i = n - 1;
        while (a[i] == '8' && i >= 0)
            a[i--] = '6';
        if (i < 0)
            break;
        a[i] = '8';
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
    int T = 1;
    while (T--)
        TestCase();
    return 0;
}