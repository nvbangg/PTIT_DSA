#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n;
    cin >> n;
    vector<bool> mark(10, 0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        while (x)
        {
            mark[x % 10] = true;
            x /= 10;
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        if (mark[i])
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}