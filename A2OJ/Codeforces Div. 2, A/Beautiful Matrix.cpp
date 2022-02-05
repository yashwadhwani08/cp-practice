#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v;
    vector<int> t(5);
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
            cin >> t[i];
        v.push_back(t);
    }

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (v[i][j] == 1)
            {
                cout << (abs(2 - i) + abs(2 - j));
                break;
            }
    return 0;
}
