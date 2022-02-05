#include <iostream>
using namespace std;

int main()
{
    string exp;
    cin >> exp;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '3' || exp[i] == '2')
        {
            if ((i + 2 < exp.length()) && (exp[i + 2] = '1'))
            {
                exp[i + 2] = exp[i];
                exp[i] = 1;
            }
        }
        // else if(exp[i]=='2')
    }
    return 0;
}