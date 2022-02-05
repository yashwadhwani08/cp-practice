#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, valid;
    cin >> s;
    valid.assign(5, 'a');
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'h' && s[i] != 'e' && s[i] != 'l' && s[i] != 'o')
            continue;
        else
        {
            if (s[i] == 'h')
            {
                if (valid[0] != 'h')
                    valid[0] = 'h';
                if (i + 1 == s.length())
                {
                    cout << "NO" << endl;
                    exit(0);
                }
            }
            else if (s[i] == 'e')
            {
                if (valid[0] == 'h' && valid[1] != 'e')
                    valid[1] = 'e';
                if (i + 1 == s.length())
                {
                    cout << "NO" << endl;
                    exit(0);
                }
            }
            else if (s[i] == 'l')
            {
                if (valid[0] == 'h' && valid[1] == 'e' && valid[2] == 'l' && valid[3] != 'l')
                {
                    valid[3] = 'l';
                    if (i + 1 != s.length())
                    {
                        if (s[i + 1] == 'o' && valid[4] != 'o')
                        {
                            valid[4] = 'o';
                        }
                    }
                    continue;
                }
                else if (valid[0] == 'h' && valid[1] == 'e' && valid[2] != 'l')
                {
                    valid[2] = 'l';
                    if (i + 1 == s.length())
                    {
                        cout << "NO" << endl;
                        exit(0);
                    }
                }
            }
            else if (s[i] == 'o')
            {
                if (valid[0] == 'h' && valid[1] == 'e' && valid[2] == 'l' && valid[3] == 'l' && valid[4] != 'o')
                {
                    valid[4] = 'o';
                    break;
                }
                continue;
            }
        }
    }
    if (valid[0] == 'h' && valid[1] == 'e' && valid[2] == 'l' && valid[3] == 'l' && valid[4] == 'o')
        cout << "YES";
    else
        cout << "NO";
    return 0;
}