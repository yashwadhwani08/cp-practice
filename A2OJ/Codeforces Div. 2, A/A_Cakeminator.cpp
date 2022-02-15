#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<char>> big;
    for (int i = 0; i < r; i++)
    {
        vector<char> small(c);
        for (int j = 0; j < c; j++)
        {
            cin >> small[j];
        }
        big.push_back(small);
    }
    vector<pair<int,int>> v;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (big[i][j] == 'S')
            {
                v.push_back({i,j});
            }
        }
    }
    set<int> rowInt;
    set<int> columnInt;
    // cout<<v.size()<<"\n";
    for(int i=0; i<v.size(); i++)
    {
        // cout<<"\n"<<v[i].first;
        rowInt.insert(v[i].first);
        columnInt.insert(v[i].second);
    }
    // cout<<r<<" "<<rowInt.size()<<" "<<c<<" "<<columnInt.size()<<"\n";
    int eaten = (r - rowInt.size())*c + (c - columnInt.size())*(rowInt.size()) ;
    cout<<eaten;
    return 0;
}
