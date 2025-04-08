#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

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
void Case()
{
    string a;
    cin >> a;
    cout << ((isTang(a) || isGiam(a)) ? "YES" : "NO") << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}