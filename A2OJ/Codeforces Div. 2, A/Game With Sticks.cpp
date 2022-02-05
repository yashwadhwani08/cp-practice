#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nHo, mVe;
    cin >> nHo >> mVe;
    int num = min(nHo, mVe);
    if (num % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}