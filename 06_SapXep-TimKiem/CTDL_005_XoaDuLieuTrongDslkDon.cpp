#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

int Case()
{
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    cin >> x;
    for (auto i : a)
        if (i != x)
            cout << i << " ";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    Case();
    return 0;
}