#include <bits/stdc++.h>
using namespace std;
//! SỐ TĂNG GIẢM
bool isTang(string a)
{
    for (int i = 1; i < a.length(); ++i)
        if (a[i] - '0' < a[i - 1] - '0')
            return 0;
    return 1;
}
bool isGiam(string a)
{
    for (int i = 1; i < a.length(); ++i)
        if (a[i] - '0' > a[i - 1] - '0')
            return 0;
    return 1;
}
void TestCase()
{
    string a;
    cin >> a;
    cout << ((isTang(a) || isGiam(a)) ? "YES" : "NO") << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}