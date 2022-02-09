#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        if (N == 1)
        {
            cout << 2 << "\n";
            continue;
        }
        set<int> hor;
        set<int> ver;
        for (int i = 0; i < N; i++)
        {
            int x, y;
            cin >> x >> y;
            hor.insert(x);
            ver.insert(y);
        }
        cout << hor.size() + ver.size() << "\n";
    }

    return 0;
}