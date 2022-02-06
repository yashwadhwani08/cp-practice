#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    if (k >= n / 2)
    {
        if (n != k)
        {
            long long int diff = 0;
            if (k == n / 2 || k == (n + 1) / 2)
            {
                cout << 2 * k - 1;
                return 0;
            }
            else if (n % 2 == 0)
            {
                diff = k - n / 2;
            }
            else
            {
                if (k < n / 2)
                {
                    diff = k - (n) / 2;
                }
                else
                {
                    diff = k - (n + 1) / 2;
                }
            }
            cout << 2 * diff;
        }
        else
        {
            if (k % 2 == 0 || k == 1)
            {
                cout << k;
            }
            else
            {
                cout << k - 1;
            }
        }
    }
    else
    {
        cout << 2 * k - 1;
    }
    return 0;
}