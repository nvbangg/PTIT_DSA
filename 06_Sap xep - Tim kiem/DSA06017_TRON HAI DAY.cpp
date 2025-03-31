#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + m);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    for (auto x : a)
        cout << x << " ";
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