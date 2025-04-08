#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void hoanvi(int n, vector<int> b)
{
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    int idx = 0;
    do
    {
        ++idx;
        if (a == b)
        {
            cout << idx << endl;
            break;
        }
    } while (next_permutation(a.begin(), a.end()));
}

void Case()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    hoanvi(n, a);
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}