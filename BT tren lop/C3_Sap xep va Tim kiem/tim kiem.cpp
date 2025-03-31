#include <bits/stdc++.h>
using namespace std;
bool tuantu(vector<int> a, int x)
{
    int n = a.size();
    for (int i = x + 1; i < n; ++i)
    {
        if (a[i] == a[x])
        {
            return 1;
        }
    }
    return 0;
}
int nhiphan(vector<int> a, int x, int begin)
{
    int n = a.size();
    int low = begin, hight = n - 1;
    int mid = (low + hight) / 2;
    while (low <= hight)
    {
        if (x == a[mid])
            return mid;
        if (x < a[mid])
            hight = mid - 1;
        else
            low = mid + 1;
        mid = (hight + low) / 2;
    }
    return 0;
}
int noisuy(vector<int> a, int x)
{
    int n = a.size();
    int low = 0, hight = n - 1, mid;
    while (a[low] <= x && a[hight] >= x)
    {
        if (a[hight] - a[low] == 0)
            return (low + hight) / 2;
        mid = low + ((x - a[low]) * (hight - low)) / (a[hight] - a[low]);
        if (a[mid] < x)
            low = mid + 1;
        else if (a[mid] > x)
            hight = mid - 1;
        else
            return mid;
    }
    if (a[low] == x)
        return low;
    return -1;
}
void TestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    vector<int> b = a;
    sort(a.begin(), a.end());
    for (auto x : b)
    {
        int idx = nhiphan(a, x, 0);
        if (nhiphan(a, x, idx - 1))
        {
            cout << x << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}