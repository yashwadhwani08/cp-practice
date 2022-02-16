#include <bits/stdc++.h>
using namespace std;

int countOperations(int num1, int num2)
{
    unsigned int count = 0;
    while (num1 != 0 || num2 != 0)
    {
        // cout << "Entry in loop!";
        if (num1 >= num2)
        {
            num1 -= num2;
            // cout << num1<<" Line 13\n";
        }
        else
        {
            num2 -= num1;
            // cout << num2<<" Line 18\n";
        }
        count++;
        if(num1==0 || num2==0)
        {
            break;
        }
    }
    return count;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int answer = countOperations(num1, num2);
    cout << answer;
}
