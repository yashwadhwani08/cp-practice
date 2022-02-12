#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int sum = 0, jokes = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum > d)
        {
            cout << -1;
            return 0;
        }
        int t;
        cin >> t;
        if (t > d)
        {
            cout << -1;
            return 0;
        }
        if (i != n - 1)
        {
            sum += t + 10;
            jokes += 2;
        }
        else
        {
            sum += t;
            if (sum < d)
            {
                if ((d - sum) / 5 > 0)
                {
                    jokes += (d - sum) / 5;
                }
            }
        }
    }
    if (sum > d)
    {
        cout << -1;
        return 0;
    }
    cout << jokes;
    return 0;
}