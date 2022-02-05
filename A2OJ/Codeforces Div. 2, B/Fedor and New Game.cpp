#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> vec(m + 1, vector<int>(n, 0));
    vector<int> v2(m + 1);
    for (int i = 0; i <= m; i++)
        cin >> v2[i];
    for (int i = 0; i <= m; i++)
    {
        int temp = v2[i];
        for (int j = n - 1; j >= 0; j--)
        {
            if (temp >= pow(2, j) && temp > 0)
            {
                vec[i][j] = 1;
                temp -= pow(2, j);
            }
        }
    }

    // for (int i = 0; i <= m; i++)
    // {
    //     cout << v2[i] << " = ";
    //     for (int j = n - 1; j >= 0; j--)
    //     {
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int count = 0;
    for(int i=0; i<m; i++)
    {
        int x = 0;
        for(int j=n-1; j>=0; j--)
        {
            if(vec[i][j] != vec[m][j]) x++;
            if(x>k) break;
        }
        if(x <= k) count++;
    }

    cout<<count<<endl;
    return 0;
}