#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, x;
    cin >> n >> x;
    vector<bool> mark(1e6 + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        mark[tmp] = 1;
    }
    if (mark[x])
        cout << 1 << endl;
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