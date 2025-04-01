#include <bits/stdc++.h>
using namespace std;
vector<int> a;
void out(int n)
{
    cout << "[";
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    cout << a[n - 1];
    cout << "]\n";
}
void Try(int i)
{
    if (i == 0)
        return;
    out(i);
    for (int j = 0; j < i - 1; ++j)
        a[j] = a[j] + a[j + 1];
    Try(i - 1);
}
void TestCase()
{
    int n;
    cin >> n;
    a.resize(n);
    for (auto &x : a)
        cin >> x;
    Try(n);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}