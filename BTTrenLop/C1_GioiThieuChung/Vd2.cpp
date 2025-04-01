#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float s = 0;
    cin >> n;
    for (int i = 0; i <= n; ++i)
    {
        s += (float)(2 * i + 1) / (2 * i + 2);
    }
    cout << fixed << setprecision(2) << s;
}