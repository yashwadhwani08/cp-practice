#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] + k > 5)
        {
            v.pop_back();
        }
    }
    if (v.size() < 3)
    {
        cout << 0;
    }
    else
    {
        cout << v.size() / 3;
    }
    return 0;
}