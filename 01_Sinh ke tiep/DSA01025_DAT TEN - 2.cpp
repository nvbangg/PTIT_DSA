#include <bits/stdc++.h>
using namespace std;
void tohop(int n, int k)
{
    vector<char> a(n, 0);
    fill(a.begin(), a.begin() + k, 1);
    do
    {
        for (int i = 0; i < n; ++i)
            if (a[i])
                cout << char(i + 'A');
        cout << endl;
    } while (prev_permutation(a.begin(), a.end()));
}
void TestCase()
{
    int n, k;
    cin >> n >> k;
    tohop(n, k);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}