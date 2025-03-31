#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, x;
    cin >> n >> x;
    vector<int> mark(1e6 + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        int j;
        cin >> j;
        mark[j]++;
    }
    if (mark[x])
        cout << mark[x] << endl;
    else
        cout << -1 << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}