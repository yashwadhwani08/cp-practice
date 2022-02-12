#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v1, v2, v3;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            v1.push_back(i + 1);
        }
        else if (x == 2)
        {
            v2.push_back(i + 1);
        }
        else
        {
            v3.push_back(i + 1);
        }
    }
    if (v1.size() == 0 || v2.size() == 0 || v3.size() == 0)
    {
        cout << 0;
    }
    else
    {
        int minVal = min(v1.size(), min(v2.size(), v3.size()));
        cout << minVal << "\n";
        for (int i = 0; i < minVal; i++)
        {
            cout << v1[i] << " " << v2[i] << " " << v3[i] << "\n";
        }
    }

    return 0;
}