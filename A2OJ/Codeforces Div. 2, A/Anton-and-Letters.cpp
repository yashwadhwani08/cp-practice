#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    vector<char> v;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '{' || input[i] == '}' || input[i] == ',' || input[i] == ' ')
        {
            continue;
        }
        else
        {
            v.push_back(input[i]);
        }
    }
    set<char> s(v.begin(), v.end());
    cout << s.size();
    return 0;
}