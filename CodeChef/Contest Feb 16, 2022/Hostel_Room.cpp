#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<int> result;
    for (int j = 0; j < T; j++)
    {
        int N, X;
        cin >> N >> X;
        int initial = X;
        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            X += temp;
            v[i] = X;
        }
        sort(v.begin(), v.end());
        if (v[v.size() - 1] > initial)
        {
            cout << v[v.size() - 1] << " " << X << "\n";
            result.push_back(v[v.size() - 1]);
        }
        else
        {
            result.push_back(initial);
        }
        v.resize(0);
    }
    for (int i = 0; i < T; i++)
    {
        cout << result[i] << "\n";
    }
    return 0;
}