#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
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
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}