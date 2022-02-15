#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // cout<<(k*l)/(n*nl)<< " " << (c*d)/n << " " << p/np<< " ";
    // cout<<2/6;
    cout<<min((k*l)/(nl), min((c*d), p/(np)))/n;
    return 0;
}