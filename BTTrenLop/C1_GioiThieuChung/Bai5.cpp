#include <bits/stdc++.h>
using namespace std;

//! PHÉP CỘNG
int main()
{
    string s;
    getline(cin, s);
    int a = s[0] - '0';
    int b = s[4] - '0';
    int c = s[8] - '0';
    cout << (a + b == c ? "YES" : "NO");
}
