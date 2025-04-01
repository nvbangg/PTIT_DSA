#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n / 2; ++i)
        cout << a[i] << " " << a[n - i - 1] << " ";
    if (n % 2 != 0)
        cout << a[n / 2];
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