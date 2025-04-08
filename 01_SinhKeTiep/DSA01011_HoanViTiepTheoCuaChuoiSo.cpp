#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

void Case()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << n << " ";
    if (next_permutation(s.begin(), s.end()))
        cout << s << endl;
    else
        cout << "BIGGEST\n";
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}