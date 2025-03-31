#include <bits/stdc++.h>
using namespace std;
//!ƯỚC SỐ CHUNG LỚN NHẤT VÀ BỘI SỐ CHUNG NHỎ NHẤT
int gcd(int a, int b)
{
    while(b)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
void TestCase()
{
    int a, b;
    cin >> a >> b;
    int uln = gcd(a, b);
    cout << uln << " " << (long long)a * b / uln << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}