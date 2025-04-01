#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, res = 0;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        int idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[idx])
                idx = j;
        }
        if (idx != i)
        {
            res++;
            swap(a[i], a[idx]);
        }
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}