#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void hoanvi(vector<int> &a)
{
    sort(a.begin(), a.end());
    do
    {
        for (int x : a)
            cout << x << " ";
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
}
int Case()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    hoanvi(a);
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    Case();
    return 0;
}