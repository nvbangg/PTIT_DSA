#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    vector<int> denominations = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    while (T--)
    {
        int N;
        cin >> N;

        int count = 0;
        for (int denom : denominations)
        {
            count += N / denom;
            N %= denom;
        }

        cout << count << endl;
    }

    return 0;
}
