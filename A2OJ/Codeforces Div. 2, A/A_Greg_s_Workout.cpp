#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n <= 3)
    {
        if (n == 1)
        {
            cout << "chest";
            return 0;
        }
        else if (n == 2)
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
            {
                cout << "chest";
            }
            else
            {
                cout << "biceps";
            }
        }
        else
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (a > b && a > c)
            {
                cout << "chest";
            }
            else if (b > a && b > c)
            {
                cout << "biceps";
            }
            else
            {
                cout << "back";
            }
        }
    }
    else
    {
        vector<int> v(3, 0);
        for (int i = 0; i < n; i++)
        {
            if (i < 3)
            {
                cin >> v[i];
            }
            else
            {
                int temp;
                cin >> temp;
                v[i % 3] += temp;
            }
        }
        if (v[0] > v[1] && v[0] > v[2])
        {
            cout << "chest";
        }
        else if (v[1] > v[0] && v[1] > v[2])
        {
            cout << "biceps";
        }
        else
        {
            cout << "back";
        }
    }
    return 0;
}