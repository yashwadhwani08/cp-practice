#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        vector<int> v;
        int carSmoke = 0, busSmoke = 0;
        int cars = 0, buses = 0;
        if (N % 4 != 0)
        {
            cars = N / 4 + 1;
            carSmoke = cars * Y;
            v.push_back(carSmoke);
        }
        else
        {
            cars = N / 4;
            carSmoke = cars * Y;
            v.push_back(carSmoke);
        }
        int maxCars = cars;
        if (N % 100 != 0)
        {
            buses = N / 100 + 1;
            busSmoke = buses * X;
            v.push_back(busSmoke);
        }
        else
        {
            buses = N / 100;
            busSmoke = buses * X;
            v.push_back(busSmoke);
        }
        int maxBuses = buses;
        while (maxBuses != 0)
        {
            int tempBus = maxBuses - 1;
            busSmoke = tempBus * X;
            cars = (N - tempBus * 100) % 4 == 0 ? (N - tempBus * 100) / 4 : (N - tempBus * 100) / 4 + 1;
            carSmoke = cars * Y;
            v.push_back(busSmoke + carSmoke);
            maxBuses--;
        }
        while (maxCars != 0)
        {
            int tempCars = maxCars - 1;
            carSmoke = tempCars * Y;
            buses = (N - tempCars * 4) % 100 == 0 ? (N - tempCars * 4) / 100 : (N - tempCars * 4) / 100 + 1;
            busSmoke = buses * X;
            v.push_back(busSmoke + carSmoke);
            maxCars--;
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<"\n";
    }
    return 0;
}