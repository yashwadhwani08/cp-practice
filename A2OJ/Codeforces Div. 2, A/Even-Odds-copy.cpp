#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    if (k <= n / 2)
    {
        cout << 2 * k - 1;
    }
    else if (n % 2 == 0)
    {
        cout << 2 * (k - n / 2);
    }
    else
    {
        if (k == (n + 1) / 2)
        {
            cout << n;
        }
        else if (k == n)
        {
            cout << n - 1;
        }
        else
        {
            cout << 2 * (k - 1 - n / 2);
        }
    }
    return 0;
}