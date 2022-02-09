#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    vector<int> ans;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, X;
        cin >> N >> X;
        if (X <= N)
        {
            ans.push_back(X);
        }
        else
        {
            ans.push_back(X % (N + 1));
        }
    }
    for (int i = 0; i < T; i++)
    {
        cout << ans[i] << "\n";
    }
    return 0;
}