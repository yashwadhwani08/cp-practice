#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a;
    for (int i = 0; i < n; i++)
    {
        vector<char> b(m, '.');
        a.push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            vector<char> b(m, '#');
            a[i] = b;
        }
        else
        {
            if (i % 4 == 1)
            {
                a[i][m - 1] = '#';
            }
            else if (i % 4 == 3)
            {
                a[i][0] = '#';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << "\n";
    }

    return 0;
}