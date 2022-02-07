#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    vector<int> op;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string s, revS;
        cin.ignore();
        cin >> s;
        if (s.length() == 1 || k == 0)
        {
            cout << 1 << "\n";
            continue;
        }
        revS = s;
        reverse(revS.begin(), revS.end());
        if (s == revS)
        {
            cout << 1 << "\n";
            continue;
        }
        else
        {
            cout << 2 << "\n";
        }
    }
    return 0;
}