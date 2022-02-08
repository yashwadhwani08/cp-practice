#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second != b.second)
    {
        return (a.second > b.second);
    }
    else
    {
        return (a.first < b.first);
    }
}

int main()
{
    int s, n, flag = 0;
    vector<pair<int, int>> v;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), sortbysec);
    int count = 0;
    for (int i = 0; i < n;)
    {
        // cout << "FOR LOOP";
        if (v[i].first < s)
        {
            s += v[i].second;
            i++;
        }
        else
        {
            if (i == 0 && count == 0)
            {
                // cout << "ELSE\n";
                sort(v.begin(), v.end());
                i += 0;
                count++;
            }
            else
            {
                // cout << "ELSE-NO\n";
                cout << "NO";
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "YES";
    }
    return 0;
}