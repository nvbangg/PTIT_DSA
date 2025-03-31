#include <bits/stdc++.h>
using namespace std;
void TestCase()
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
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}