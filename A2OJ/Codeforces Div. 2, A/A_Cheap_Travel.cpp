#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (n % m == 0)
    {
        cout << min((n / m) * b, a*n);
    }
    else
    {
        
        cout << min((n / m) * b + min(a*(n%m), b), a*n);
    }
    return 0;
}