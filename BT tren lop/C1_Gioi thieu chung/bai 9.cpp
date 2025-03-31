#include <bits/stdc++.h>
using namespace std;
//! VÒNG TRÒN
int giaoDiem(string &s)
{
    //Lưu vị trí kí tự
    map<char, vector<int>> mp; 
    for (int i = 0; i < 52; i++)
        mp[s[i]].push_back(i);

    int cnt = 0;
    for (auto &[c1, p1] : mp)
    {
        for (auto &[c2, p2] : mp)
        {
            if (c1 >= c2)
                continue; 
            int x1 = p1[0], x2 = p1[1];
            int y1 = p2[0], y2 = p2[1];
            if ((x1 < y1 && y1 < x2 && x2 < y2) || (y1 < x1 && x1 < y2 && y2 < x2))
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    string s;
    cin >> s;
    cout << giaoDiem(s) << endl;
    return 0;
}
