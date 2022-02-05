#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n, m, time = 0;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];

    for (int i = 0; i < m; i++)
    {
        if (i > 0 && v[i] < v[i - 1])
            time += (n - v[i - 1]) + v[i];
        else if (i > 0 && v[i] > v[i - 1])
            time += (v[i] - v[i - 1]);
        else if (i > 0 && v[i] == v[i - 1])
            time += 0;
        else if (v[i] > i)
            time += (v[i] - (i + 1));
    }
    cout << time << endl;
    return 0;
}