#include <bits/stdc++.h>
using namespace std;
vector<string> b;
void insertionSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
        string buoc = "Buoc " + to_string(i) + ": ";
        for (j = 0; j <= i; ++j)
            buoc += to_string(a[j]) + " ";
        b.push_back(buoc);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    insertionSort(a);
    for (int i = b.size() - 1; i >= 0; --i)
        cout << b[i] << endl;
}