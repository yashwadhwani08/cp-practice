#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n, k;
    cin >> n >> k;
    vector<int> joy;
    for (int i = 0; i < n; i++)
    {
        unsigned int f, t;
        cin >> f >> t;
        if (t > k)
        {
            joy.push_back(f - (t - k));
        }
        else
        {
            joy.push_back(f);
        }
    }
    sort(joy.begin(), joy.end());
    cout<<joy[n-1];
    return 0;
}