#include <iostream>
using namespace std;

int main()
{
    string string1, string2;
    cin >> string1 >> string2;
    int flag = 0;
    for (int i = 0; i < string1.length(); i++)
    {
        if (string1[i] < 97)
            string1[i] += 32;
        if (string2[i] < 97)
            string2[i] += 32;
        if (int(string1[i]) == int(string2[i]))
            continue;
        else if (int(string1[i]) < int(string2[i]))
        {
            cout << -1 << endl;
            flag = 1;
            break;
        }
        else
        {
            cout << 1 << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << 0 << endl;
    return 0;
}