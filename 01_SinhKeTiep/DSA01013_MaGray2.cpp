#include <bits/stdc++.h>
using namespace std;
void TestCase()
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
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}