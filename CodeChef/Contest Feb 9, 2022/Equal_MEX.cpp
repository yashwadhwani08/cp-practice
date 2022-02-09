#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;

        vector<int> v;
        vector<int> v1, v2;
        int temp;
        for (int j = 0; j < 2 * N; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        int j = 0;
        while (v1.size() != N)
        {
            if (v1.size() % 2 == 0)
            {
                v1.push_back(v[j]);
                j++;
            }
        }
    }

    return 0;
}
