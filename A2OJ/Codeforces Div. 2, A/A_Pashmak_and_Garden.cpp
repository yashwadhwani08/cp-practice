#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2)
    {
        int distance = abs(y2 - y1);
        x3 = x1 + distance;
        y3 = y1;
        x4 = x2 + distance;
        y4 = y2;
        if (pow(x3 - x1, 2) + pow(y3 - y1, 2) == pow(x4 - x3, 2) + pow(y4 - y3, 2))
        {
            cout << x3 << " " << y3 << " " << x4 << " " << y4;
        }
        else
        {
            cout << -1;
        }
    }
    else if (y1 == y2)
    {
        int distance = abs(x2 - x1);
        x3 = x1;
        y3 = y1 + distance;
        x4 = x2;
        y4 = y2 + distance;
        if (pow(x3 - x1, 2) + pow(y3 - y1, 2) == pow(x4 - x3, 2) + pow(y4 - y3, 2))
        {
            cout << x3 << " " << y3 << " " << x4 << " " << y4;
        }
        else
        {
            cout << -1;
        }
    }
    else if (x1 != x2 && y1 != y2)
    {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
        if (pow(x3 - x1, 2) + pow(y3 - y1, 2) == pow(x2 - x3, 2) + pow(y2 - y3, 2))
        {
            cout << x3 << " " << y3 << " " << x4 << " " << y4;
        }
        else
        {
            cout << -1;
        }
    }
    return 0;
}