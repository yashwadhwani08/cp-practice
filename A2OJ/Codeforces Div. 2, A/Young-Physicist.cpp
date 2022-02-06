#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    int a = n;
    while (a > 0)
    {
        vector<int> v1(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v1[i];
        }
        v.push_back(v1);
        a--;
    }

    int sumx = 0, sumy = 0, sumz = 0;
    for (int i = 0; i < n; i++)
    {
        sumx += v[i][0];
        sumy += v[i][1];
        sumz += v[i][2];
    }

    if (sumx != 0 || sumy != 0 || sumz != 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}