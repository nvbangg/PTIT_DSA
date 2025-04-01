#include <bits/stdc++.h>
using namespace std;
int n, cnt;
bool a[50][50];
bool b[100];
void out()
{
    for (int i = 1; i <= 2 * n - 2; ++i)
        if (b[i])
            cout << "D";
        else
            cout << "R";
    cout << " ";
}
void Try(int i, int j)
{
    if (i == n && j == n)
    {
        cnt++;
        out();
    }
    if (a[i + 1][j])
    {
        b[i + j - 1] = 1;
        Try(i + 1, j);
    }
    if (a[i][j + 1])
    {
        b[i + j - 1] = 0;
        Try(i, j + 1);
    }
}
void TestCase()
{
    cin >> n;
    cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    }
    Try(1, 1);
    if (cnt == 0)
        cout << -1;
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}