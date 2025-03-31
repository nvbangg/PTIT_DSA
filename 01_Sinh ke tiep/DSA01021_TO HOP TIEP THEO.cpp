#include <bits/stdc++.h>
using namespace std;
map<int, bool> mp;
void tohop_next(vector<int> &a, int n)
{
    vector<int> b(n, 0);
    int cnt = 0;
    for (int i : a)
        b[i - 1] = 1;
    if (!prev_permutation(b.begin(), b.end()))
    {
        cout << a.size() << endl;
        return;
    }
    for (int i = 0; i < n; ++i)
        if (b[i])
            if (mp[i + 1] != 1)
                cnt++;
    cout << cnt << endl;
}
void TestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    mp.clear();
    for (auto &x : a)
    {
        cin >> x;
        mp[x] = 1;
    }
    tohop_next(a, n);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}