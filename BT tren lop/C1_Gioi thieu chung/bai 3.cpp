#include <bits/stdc++.h>
using namespace std;
//!  MẢNG ĐỐI XỨNG
void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int check = 1;
    for (int i = 0; i <= (n-1) / 2; ++i)
        if (a[i] != a[n - i - 1])
        {
            check = 0;
            break;
        }
    cout << (check ? "YES" : "NO") << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}