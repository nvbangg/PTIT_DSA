#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

//! ƯỚC SỐ CHUNG LỚN NHẤT VÀ BỘI SỐ CHUNG NHỎ NHẤT
int gcd(int a, int b)
{
    while (b)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
void Case()
{
    int a, b;
    cin >> a >> b;
    int uln = gcd(a, b);
    cout << uln << " " << (long long)a * b / uln << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}