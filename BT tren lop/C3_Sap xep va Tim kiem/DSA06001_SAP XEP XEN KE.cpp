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
            if (a[j] > a[i])
            {
                idx = j;
            }
            swap(a[i], a[idx]);
        }
    }
    return a;
}
void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    a = selection_sort(a);
    for (int i = 0; i < n / 2; ++i)
        cout << a[i] << " " << a[n - i - 1] << " ";
    if (n % 2 != 0)
        cout << a[n / 2];
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