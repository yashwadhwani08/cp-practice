#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m), arr;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0, j = 0; i < v.size(); i++, j++)
    {
        if (j + n - 1 < v.size())
        {
            arr.push_back(v[j + n - 1] - v[j]);
        }
    }

    cout << *min_element(arr.begin(), arr.end());
    return 0;
}