#include <bits/stdc++.h>
using namespace std;
void tohop_next(vector<int> &a, int n)
{
    vector<int> b(n, 0);
    set<int> s(a.begin(), a.end());
    for (int i : a)
        b[i - 1] = 1;
    if (!prev_permutation(b.begin(), b.end()))
    {
        cout << a.size() << endl;
        return;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i)
        if (b[i] && s.count(i + 1))
            cnt++;
    cout << a.size() - cnt << endl;
}
void TestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (auto &x : a)
        cin >> x;
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