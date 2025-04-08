#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

//! CHUẨN HÓA 1
vector<string> chuan_hoa(string &s)
{
    vector<string> v;
    string x = "";
    for (auto c : s)
    {
        if (c == ' ')
        {
            if (x != "")
            {
                v.push_back(x);
                x = "";
            }
        }
        else
            x += tolower(c);
    }
    if (x != "")
        v.push_back(x);
    for (auto &x : v)
        x[0] = toupper(x[0]);
    return v;
}
void Case()
{
    string s;
    getline(cin, s);
    vector<string> v = chuan_hoa(s);
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
        Case();
    return 0;
}
