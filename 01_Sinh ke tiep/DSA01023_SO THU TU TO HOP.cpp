#include <bits/stdc++.h>
using namespace std;
void tohop(int n, int k, vector<int> b)
{
    vector<int> a(n, 0);

    fill(a.begin(), a.begin() + k, 1);
    int idx = 0;
    do
    {
        ++idx;
        vector<int> c;
        for (int i = 0; i < n; ++i)
            if (a[i])
                c.push_back(i + 1);
        if (c == b)
        {
            cout << idx << endl;
            break;
        }
        
    } while (prev_permutation(a.begin(), a.end()));
}
void TestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for(auto &x : a)
        cin >> x;
    tohop(n, k, a);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}