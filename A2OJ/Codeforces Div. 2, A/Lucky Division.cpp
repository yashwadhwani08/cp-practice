#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string num = to_string(n);
    if (num.length() == 1)
    {
        if (n % 7 == 0 || n % 4 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else if (num.length() == 2)
    {
        if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else if (num.length() == 3)
    {
        if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 744 == 0 || n % 747 == 0 || n % 774 == 0 || n % 777 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else if (num.length() == 4)
        cout << "YES";
    return 0;
}