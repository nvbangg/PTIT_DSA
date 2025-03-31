#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int i = s.size() - 1;
    while(s[i] == '1' && i >= 0)
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
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}