#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string out;
    cin >> s;
    int i = 0;
    while (i < s.length())
    {
        if (i + 2 < s.length() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (out.length() > 0 && out[out.length() - 1] != ' ')
            {
                out.push_back(' ');
            }

            i += 3;
        }
        else
        {
            out.push_back(s[i]);
            i++;
        }
    }
    if (out[out.length() - 1] == ' ')
    {
        out.pop_back();
    }
    for (int i = 0; i < out.length(); i++)
    {
        cout << out[i];
    }

    return 0;
}