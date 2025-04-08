#include <bits/stdc++.h>
using namespace std;
#define testCase() ([] { int T; cin >> T; while(T--) Case(); }())
#define endl '\n'

vector<int> a;
int ok, n, k;
void init()
{
    cin >> n >> k;
    a.resize(k);
    for (int i = 0; i < k; ++i)
        cin >> a[i];
}
void result()
{
    for (int i = 0; i < k; ++i)
        cout << a[i] << " ";
    cout << endl;
}
void sinh()
{
    int i = k - 1;
    while (i >= 1 && a[i] == a[i - 1] + 1)
        i--;
    if (i == 0 && a[0] == 1)
        a[0] = n - k + 1;
    else
        a[i]--;
    for (int j = k - 1; j > i; j--)
        a[j] = n - k + j + 1;
}
void Case()
{
    init();
    sinh();
    result();
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    testCase();
    return 0;
}