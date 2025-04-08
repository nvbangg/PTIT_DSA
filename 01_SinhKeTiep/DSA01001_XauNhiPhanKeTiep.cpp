#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
{
    string s;
    cin >> s;
    int i = s.size() - 1;
    while (s[i] == '1' && i >= 0)
    {
        s[i] = '0';
        i--;
    }
    if (i >= 0)
        s[i] = '1';
    cout << s << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}