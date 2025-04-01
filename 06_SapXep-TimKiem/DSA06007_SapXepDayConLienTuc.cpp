#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> b = a;
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    while (a[i] == b[i])
        i++;
    while (a[j] == b[j] && j > i)
        j--;
    cout << i + 1 << " " << j + 1;
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