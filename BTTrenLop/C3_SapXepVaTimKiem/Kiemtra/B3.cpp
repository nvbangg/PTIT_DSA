#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, s, k;
    cin >> n >> s >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int sum = 0;
    vector<int> res;
    while (s--)
    {
        sum += a[s - 1];
        res.push_back(sum);
    }
    for (int i = 0; i < res.size(); ++i)
    {
        if (res[i] > k)
        {
            cout <<
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}