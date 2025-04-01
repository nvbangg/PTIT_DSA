#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, x;
    cin >> n >> x;
    vector <int> a(n);
    for (auto &i : a)
        cin >> i;    
    stable_sort(a.begin(), a.end(), [x](int u, int v)
                { return abs(u - x) < abs(v - x); });
    for (auto i : a)
        cout << i << " ";
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