#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(2,0);
    int n;
    int oddCount = 0, evenCount = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 0)
        {
            v[0] = i + 1;
            evenCount++;
        }
        else
        {
            v[1] = i + 1;
            oddCount++;
        }
    }

    if (evenCount < oddCount)
    {
        cout << v[0];
    }
    else
    {
        cout << v[1];
    }
}