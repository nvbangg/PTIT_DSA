#include <bits/stdc++.h>
using namespace std;
vector<int> selection_sort(vector<int> a)
{
    int n = a.size();
    for (int i = 0; i < n; ++i)
    {
        int idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[i])
            {
                idx = j;
                swap(a[i], a[idx]);
            }
        }
    }
    return a;
}
void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n), res;
    for (int &x : a)
        cin >> x;
    for (int x : a)
    {
        while (x)
        {
            if (find(res.begin(), res.end(), x % 10) == res.end())
                res.push_back(x % 10);
            x /= 10;
        }
    }
    res = selection_sort(res);
    for (int x : a)
        cout << x << " ";
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