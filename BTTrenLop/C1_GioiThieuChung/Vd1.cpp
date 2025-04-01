#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0;
    cin >> n;
    for (int i = 0; i <= n; ++i)
        s += i;
    cout << s;
}