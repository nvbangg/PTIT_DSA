#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, x, res;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i)
    {
        int tmp;
        cin >> tmp;
        if (tmp == x)
            res = i;
    }
    cout << res << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}