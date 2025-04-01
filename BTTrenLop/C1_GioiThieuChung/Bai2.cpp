#include <bits/stdc++.h>
using namespace std;
//! BẮT ĐẦU VÀ KẾT THÚC
void TestCase()
{
    int n;
    cin >> n;
    int cuoi = n % 10;
    while (n >= 10)
        n /= 10;
    int dau = n;
    cout << (dau == cuoi ? "YES" : "NO") << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}