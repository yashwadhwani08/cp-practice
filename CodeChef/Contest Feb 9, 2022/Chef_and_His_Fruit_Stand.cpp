#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    vector<int> ans;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int X, Y;
        cin >> X >> Y;
        if (X == 0 || Y == 0)
        {
            ans.push_back(0);
            continue;
        }
        else
        {
            if (X % 2 == 0)
            {
                if (X / 2 > Y)
                {
                    ans.push_back(Y);
                }
                else
                {
                    ans.push_back(X / 2);
                }
            }
            else
            {
                if ((X - 1) / 2 > Y)
                {
                    ans.push_back(Y);
                }
                else
                {
                    ans.push_back((X - 1)/2);
                }
            }
        }
    }
    for(int i=0; i<T; i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}