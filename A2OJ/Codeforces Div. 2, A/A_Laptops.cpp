#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n;
    cin >> n;
    vector<pair<int, int>> price(n), quality(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        price[i] = {a, i};
        quality[i] = {b, i};
    }
    sort(price.begin(), price.end());
    sort(quality.begin(), quality.end());
    for (int i = n - 1; i >= 0; i--)
    {
        if (price[i].second != quality[i].second)
        {
            cout << "Happy Alex";
            return 0;
            break;            
        }
    }
    cout<<"Poor Alex";
    return 0;
    
}