#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
{
    string s;
    cin >> s;
    string res = "";
    res.push_back(s[0]);
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] != res.back())
            res.push_back('1');
        else
            res.push_back('0');
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}