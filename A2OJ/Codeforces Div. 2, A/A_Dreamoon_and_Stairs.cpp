#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1;
    }
    else
    {
        int i = (n / 2) + (n % 2);
        if (i % m != 0)
        {
            while (i % m != 0 && i <= n)
            {
                i++;
            }
            if (i > n)
            {
                cout << -1;
            }
            else
            {
                cout << i;
            }
        }
        else
        {
            cout << (n / 2) + (n % 2);
        }
    }
}
