#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> b;
void bubbleSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool check_sorted = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                check_sorted = false;
            }
        }
        if (check_sorted)
            break;
        b.push_back(a);
    }
}

int TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    b.clear();
    bubbleSort(a);
    for (int i = b.size() - 1; i >= 0; --i)
    {
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; ++j)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
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