#include <bits/stdc++.h>
using namespace std;

vector<int> A, X;
int n, k, dem = 0;
bool Ok = true;

void init()
{
    cin >> n >> k;
    A.resize(n + 1);
    X.resize(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
}

void Result()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (X[i])
            sum += A[i];
    }
    if (sum == k)
    {
        dem++;
        for (int i = 1; i <= n; i++)
        {
            if (X[i])
                cout << A[i] << " ";
        }
        cout << endl;
    }
}

void sinh()
{
    int i = n;
    while (i > 0 && X[i])
    {
        X[i] = 0;
        i--;
    }
    if (i > 0)
        X[i] = 1;
    else
        Ok = false;
}

int main()
{
    init();
    while (Ok)
    {
        Result();
        sinh();
    }
    cout << dem << endl;
    return 0;
}