#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q;
    cin >> n >> p;
    vector<int> arr;
    for (int i = 0; i < p; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cin >> q;
    vector<int> q1(q);
    for (int i = 0; i < q; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    set<int> s(arr.begin(), arr.end());
    if (s.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}