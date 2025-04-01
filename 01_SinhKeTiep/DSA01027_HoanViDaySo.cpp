#include <bits/stdc++.h>
using namespace std;
void hoanvi(vector<int> &a)
{
    sort(a.begin(), a.end());
    do
    {
        for (int x : a)
            cout << x << " ";
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    hoanvi(a);
}