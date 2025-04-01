#include <bits/stdc++.h>
using namespace std;
void Try(int limit, int remain, vector<int> a)
{
    if (remain == 0)
    {
        cout << "(";
        for (int i = 0; i < a.size() - 1; ++i)
        {
            cout << a[i] << " ";
        }
        cout << a.back() << ") ";
    }
    for (int i = limit; i >= 1; --i)
    {
        if (i <= remain)
        {
            a.push_back(i);
            Try(i, remain - i, a);
            a.pop_back();
        }
    }
}
void TestCase()
{
    int n;
    cin >> n;
    Try(n, n, {});
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}