#include <bits/stdc++.h>
using namespace std;
//! PHÂN TÍCH THỪA SỐ NGUYÊN TỐ
vector<pair<int, int>> thua_so(int n)
{
    vector<pair<int, int>> res;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt > 0)
            res.push_back({i, cnt});
    }
    if (n > 1)
        res.push_back({n, 1});
    return res;
}
int main()
{
    int T;
    cin >> T;
    for (int k = 1; k <= T; ++k)
    {
        cout << "Test " << k << ": ";
        int n;
        cin >> n;
        vector<pair<int, int>> res = thua_so(n);
        for (int i = 0; i < res.size(); ++i)
            cout << res[i].first << "(" << res[i].second << ") ";
        cout << endl;
    }
    return 0;
}