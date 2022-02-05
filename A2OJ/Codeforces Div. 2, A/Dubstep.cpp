vcpkg install boost;
#include <iostream>
#include<boost/algorithm/string.hpp>



using namespace std;

int main()
{
    string s;
    string out;
    cin >> s;
    cout << "\n";
    for (int i = 0; i < s.length();)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 3;
        }
        else
        {
            out.push_back(s[i]);
            if (i + 3 < s.length() && s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B')
            {
                out.push_back(' ');
                i += 4;
                continue;
            }
            i++;
        }
    }
    string finalString(out);
    // if (finalString[finalString.length() - 1] = ' ')
    trim_right(finalString);
    cout << finalString << "\n";
    return 0;
}