#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

//!  MẢNG ĐỐI XỨNG
void Case()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int check = 1;
    for (int i = 0; i <= (n - 1) / 2; ++i)
        if (a[i] != a[n - i - 1])
        {
            check = 0;
            break;
        }
    cout << (check ? "YES" : "NO") << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}