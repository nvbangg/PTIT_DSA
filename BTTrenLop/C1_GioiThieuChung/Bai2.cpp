#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

//! BẮT ĐẦU VÀ KẾT THÚC
void Case()
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
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}