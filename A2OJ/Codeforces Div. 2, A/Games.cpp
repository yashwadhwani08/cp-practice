#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, game = 0;
    cin >> n;
    vector<pair<int, int>> v;
    pair<int, int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
            {
                if (v[i].first == v[j].second)
                    game++;
            }
        }
    }
    cout<<game<<endl;
    return 0;
}