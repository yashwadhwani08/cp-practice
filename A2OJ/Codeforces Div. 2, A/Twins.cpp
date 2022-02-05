#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, sumStart = 0;
    cin >> n;
    vector<int> coinVal(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> coinVal[i];
        sumStart += coinVal[i];
    }
    sort(coinVal.begin(), coinVal.end());

    int lastSum = 0;
    int coins = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        lastSum += coinVal[i];
        sumStart -= coinVal[i];
        if (sumStart >= lastSum)
            continue;
        else
        {
            coins = i;
            break;
        }
    }
    cout << n - coins << endl;
    return 0;
};