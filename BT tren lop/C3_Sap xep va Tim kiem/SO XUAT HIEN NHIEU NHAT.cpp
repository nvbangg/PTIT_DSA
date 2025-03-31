#include <bits/stdc++.h>
using namespace std;
int tuantu(vector<int> a, int x)
{
    int n = a.size();
    int cnt = 1;
    for (int i = x + 1; i < n; ++i)
    {
        if (a[i] == a[x])
        {
            cnt++;
        }
    }
    return cnt;
}
void TestCase()
{
    int n, tmp, check = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        if (tuantu(a, i) > n / 2)
        {
            tmp = a[i];
            check = 1;
            break;
        }
    }
    if (check)
        cout << tmp << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}