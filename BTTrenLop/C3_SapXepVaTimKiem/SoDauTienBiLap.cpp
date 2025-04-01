#include <bits/stdc++.h>
using namespace std;
bool tuantu(vector<int> a, int x)
{
    int n = a.size();

    for (int i = x; i < n; ++i)
    {
        if (a[i] == a[x])
        {
            return 1;
        }
    }
    return 0;
}
bool nhiphan(vector<int> a, int x)
{
    int n = a.size();
    int low = 0, hight = n - 1;
    int mid = (low + hight) / 2;
    while (low <= hight)
    {
        if (x == a[mid])
            return 1;
        if (x < a[mid])
            hight = mid - 1;
        else
            low = mid + 1;
        mid = (hight + low) / 2;
    }
    return 0;
}
void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        if (tuantu(a, i + 1))
        {
            cout << a[i] << endl;
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