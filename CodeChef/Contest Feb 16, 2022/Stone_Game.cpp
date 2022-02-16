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
        vector<char> A(N);
        vector<char> B(N);
        vector<int> C;
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
            C.push_back(A[j]);
        }
        for (int j = 0; j < N; j++)
        {
            cin >> B[j];
            C.push_back(B[j]);
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        sort(C.begin(), C.end());
        if (A[A.size() - 1] < B[0])
        {
            for (int j = 0; j < 2 * N; j++)
            {
                if (j < N)
                {
                    cout << A[0];
                    A.erase(A.begin());
                }
                else
                {
                    cout << B[B.size() - 1];
                    B.pop_back();
                }
            }
            cout << "\n";
        }
        else
        {
            for (int j = 0; j < 2 * N; j++)
            {
                if (j % 2 == 0)
                {
                    cout << A[0];
                    A.erase(A.begin());
                }
                else
                {
                    cout << B[B.size() - 1];
                    B.pop_back();
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
