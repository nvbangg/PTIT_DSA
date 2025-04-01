#include <bits/stdc++.h>
using namespace std;
void Gray(int n)
{
    vector<string> a;
    a.push_back("0");
    a.push_back("1");
    for (int i = 2; i <= n; ++i)
    {
        int l = a.size();
        for (int i = l - 1; i >= 0; --i)
            a.push_back(a[i]);
        for (int i = 0; i < l; ++i)
            a[i] = '0' + a[i];
        for (int i = l; i < 2 * l; ++i)
            a[i] = '1' + a[i];
    }
    for (auto x : a)
        cout << x << " ";
    cout << endl;
}
void TestCase()
{
    int n;
    cin >> n;
    Gray(n);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}