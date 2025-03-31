#include <bits/stdc++.h>
using namespace std;
void xau_nhiphan(int n)
{
    vector<int> a(n, 0);
    while (1)
    {
        for (auto x : a)
            cout << x;
        cout << " ";
        int i = n - 1;
        while (a[i] == 1 && i >= 0)
            a[i--] = 0;
        if (i < 0)
            break;
        a[i] = 1;
    }
}

void tohop(int n, int k)
{
    int a[k + 1];
    for (int i = 1; i <= k; ++i)
        a[i] = i;
    while (1)
    {
        for (int i = 1; i <= k; ++i)
            cout << a[i];
        cout << " ";
        int i = k;
        while (a[i] == n - k + i && i > 0)
            i--;
        if (i == 0)
            break;
        a[i]++;
        for (int j = i + 1; j <= k; ++j)
            a[j] = a[i] + j - i;
    }
}

void hoanvi(int n)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        a[i] = i + 1;
    while (1)
    {
        for (auto x : a)
            cout << x;
        cout << " ";
        int i = n - 2, k = n - 1;
        while (a[i] > a[i + 1] && i >= 0)
            i--;
        if (i < 0)
            break;
        while (a[k] < a[i])
            k--;
        swap(a[i], a[k]);
        reverse(a + i + 1, a + n);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    tohop(n, k);
}