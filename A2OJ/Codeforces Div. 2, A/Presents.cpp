#include <iostream>
#include <vector>
using namespace std;

int main()
{
    pair<int, int> gifts;

    int n;
    cin >> n;
    vector<int> test(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        int giver;
        cin >> giver;
        test[giver] = i + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << test[i] << " ";
    }
    return 0;
}