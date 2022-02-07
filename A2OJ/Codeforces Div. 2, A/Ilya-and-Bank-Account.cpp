#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (stoi(s) >= 0)
    {
        cout << stoi(s);
    }
    else
    {
        string s1, s2;
        // removing last character
        for (int i = 0; i < s.length() - 1; i++)
        {
            s1.push_back(s[i]);
        }
        // removing last second character
        for (int i = 0; i < s.length(); i++)
        {
            if (i == s.length() - 2)
            {
                continue;
            }
            s2.push_back(s[i]);
        }

        if (stoi(s1) <= stoi(s2))
        {
            cout << stoi(s2);
        }
        else
        {
            cout << stoi(s1);
        }
    }
    return 0;
}