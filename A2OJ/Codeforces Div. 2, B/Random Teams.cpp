#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n, m;
    cin >> n >> m;
    unsigned int min, max;
    unsigned int numberForMax = n - (m - 1);
    max = numberForMax * (numberForMax - 1) / 2;
    if (m == 1)
        min = max;
    else
    {
        int q = n / m;
        int minArrange;
        minArrange = n - (q * m) < (q + 1) * m - n ? q : q + 1;
        if (n % m != 0)
        {
            int leftPlayers = n - (m - 1) * minArrange;
            min = (m - 1) * (minArrange * (minArrange - 1)) / 2 + (leftPlayers * (leftPlayers - 1)) / 2;
        }
        else
        {
            min = m * (minArrange * (minArrange - 1)) / 2;
        }
    }
    cout << min << " " << max;
}