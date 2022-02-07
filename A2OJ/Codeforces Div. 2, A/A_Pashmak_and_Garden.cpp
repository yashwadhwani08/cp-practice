#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    // cout << pow(x2 - x1, 2) + pow(y2 - y1, 2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    int dist = distance / 1;
    if (dist * 1 != distance && (x1 == x2 || y1 == y2))
    {
        cout << -1;
    }
    else
    {
        int x3, x4, y3, y4;
        if (x1 == x2)
        {
            x3 = x1 + dist;
            y3 = y1;
            x4 = x2 + dist;
            y4 = y2;
        }
        else if (y1 == y2)
        {
            x3 = x1;
            y3 = y1 + dist;
            x4 = x2;
            y4 = y2 + dist;
        }
        else if (x1 != x2 && y1 != y2)
        {
            // cout << "This is working";
            if ((x1 != y1 || x1 + y1 == 0 && x2 == y2) || (x1 == y1 && x2 + y2 == 0 || x2 != y2))
            {
                if ((x1 != 0 && y1 != 0) && (x2 != 0 && y2 != 0))
                {
                    cout << -1;
                    return 0;
                }
            }
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
            if (pow(x2 - x1, 2) + pow(y2 - y1, 2) != pow(x3 - x1, 2) + pow(y3 - y1, 2) + pow(x3 - x2, 2) + pow(y3 - y2, 2))
            {
                cout << "This running!";
                cout << -1;
                return 0;
            }
            else if (pow(x2 - x1, 2) + pow(y2 - y1, 2) == pow(x3 - x1, 2) + pow(y3 - y1, 2) + pow(x3 - x2, 2) + pow(y3 - y2, 2))
            {
                if (pow(x3 - x1, 2) + pow(y3 - y1, 2) != pow(x3 - x4, 2) + pow(y3 - y4, 2))
                {

                    if (pow(x3 - x1, 2) + pow(y3 - y1, 2) != pow(x3 - x2, 2) + pow(y3 - y2, 2))
                    {
                        cout << -1;
                        return 0;
                    }
                }
            }
        }
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
    }
    return 0;
}