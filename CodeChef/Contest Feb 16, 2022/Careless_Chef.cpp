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
        // vector<int> B(2 * N);
        int sum = 0;
        for (int j = 0; j < 2 * N; j++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }
        // cout<<sum<<"\n";
        if (sum % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}