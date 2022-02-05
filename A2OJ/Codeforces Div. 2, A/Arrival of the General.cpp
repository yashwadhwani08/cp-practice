#include <iostream>
#include <algorithm>

using namespace std;
int MAX_SIZE = 100;
int main()
{
    int n, arr[MAX_SIZE];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int max = *max_element(arr, arr + n);
    int min = *min_element(arr, arr + n);
    int indexMax, indexMin;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == max)
        {
            indexMax = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == min)
        {
            indexMin = i;
            break;
        }
    }
    // cout << indexMax << " " << indexMin << "\n";
    
    // if (indexMin >= n / 2 && indexMax <= n / 2 || (indexMax < indexMin))
    if(indexMax < indexMin)
        cout << (indexMax) + abs(indexMin - (n - 1));
    else
        cout << (indexMax) + abs(indexMin - (n - 1)) - 1;
    return 0;
}