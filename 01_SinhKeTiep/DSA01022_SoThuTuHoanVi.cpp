#include <bits/stdc++.h>
using namespace std;
void hoanvi(int n, vector<int> b)
{
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    int idx = 0;
    do
    {
        ++idx;
        if (a == b)
        {
            cout << idx << endl;
            break;
        }
    } while (next_permutation(a.begin(), a.end()));
}

void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x: a)
        cin >> x;
    hoanvi(n, a);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}