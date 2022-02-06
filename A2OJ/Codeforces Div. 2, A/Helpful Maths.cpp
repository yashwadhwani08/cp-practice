#include <iostream>
using namespace std;

int main()
{
    string exp;
    pair<char, int> PAIR1, PAIR2, PAIR3;
    PAIR1.first = '1';
    PAIR1.second = 0;
    PAIR2.first = '2';
    PAIR2.second = 0;
    PAIR3.first = '3';
    PAIR3.second = 0;
    cin >> exp;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '1')
        {
            PAIR1.second++;
        }
        else if (exp[i] == '2')
        {
            PAIR2.second++;
        }
        else if (exp[i] == '3')
        {
            PAIR3.second++;
        }
    }
    while (PAIR1.second > 0)
    {
        if (PAIR2.second == 0 && PAIR3.second == 0)
        {
            if (PAIR1.second > 1)
            {
                cout << PAIR1.first << '+';
            }
            else
            {
                cout << PAIR1.first;
            }
        }

        else
        {
            cout << PAIR1.first << '+';
        }
        PAIR1.second--;
    }
    while (PAIR2.second > 0)
    {
        if (PAIR3.second == 0)
        {
            if (PAIR2.second > 1)
            {
                cout << PAIR2.first << '+';
            }
            else
            {
                cout << PAIR2.first;
            }
        }
        else
        {
            cout << PAIR2.first << '+';
        }
        PAIR2.second--;
    }
    while (PAIR3.second > 0)
    {
        if (PAIR3.second > 1)
        {
            cout << PAIR3.first << '+';
        }
        else
        {
            cout << PAIR3.first;
        }
        PAIR3.second--;
    }
    return 0;
}