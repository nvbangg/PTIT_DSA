#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

int n;
vector<int> a;
void init()
{
    cin >> n;
    a.resize(n);
    for (auto &x : a)
        cin >> x;
}
void row()
{
    if (n == 0)
        return;
    cout << "[";
    for (int i = 0; i < n - 1; ++i)
    {
        cout << a[i] << " ";
    }
    cout << a[n - 1] << "]\n";
    for (int i = 0; i < n; ++i)
        a[i] += a[i + 1];
    n--;
    row();
}
void Case()
{
    init();
    row();
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}