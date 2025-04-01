#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < k; ++i)
        cout << a[i] << " ";
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