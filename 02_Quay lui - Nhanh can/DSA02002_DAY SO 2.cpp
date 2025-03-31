#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<vector<int>> res;
void Try(int i)
{
    if (i == 0)
        return;
    res.push_back(a);
    for (int j = 0; j < a.size() - 1; ++j)
        a[j] = a[j] + a[j + 1];
    a.pop_back();
    Try(i - 1);
}
void TestCase()
{
    int n;
    cin >> n;
    a.resize(n);
    res.clear();
    for (auto &x : a)
        cin >> x;
    Try(n);
    for (int i = res.size() - 1; i >= 0; --i)
    {
        int l = res[i].size() - 1;
        cout << "[";
        for (int j = 0; j < l; ++j)
            cout << res[i][j] << " ";
        cout << res[i][l] << "] ";
    }
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