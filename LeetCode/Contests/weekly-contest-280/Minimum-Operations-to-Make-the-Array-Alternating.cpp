#include <bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int> &nums)
{
    vector<long int> oddPos(nums.size()/2,0);
    vector<long int> evenPos(nums.size()/2,0);
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (i != 0 && nums[i] == oddPos[oddPos.size() - 1])
            {
                evenPos[evenPos.size()-1]+=1;
            }
            else
            {
                // evenPos.push_back(nums[i]);
                evenPos[nums[i]] += 1;
            }
        }
        else
        {
            if (nums[i] == evenPos[evenPos.size() - 1])
            {
                oddPos.push_back(nums[i] + INT_MAX);
            }
            else
            {
                oddPos.push_back(nums[i]);
            }
        }
    }
    set<int> s1(oddPos.begin(), oddPos.end());
    set<int> s2(evenPos.begin(), evenPos.end());
    cout<<evenPos.size()<<" "<<s2.size()<<"\n";
    cout<<oddPos.size()<<" "<<s1.size()<<"\n";

    if (s1.size() != 2 || s2.size() != 2)
    {
        if (s1.size() != 2 && s2.size() == 2)
        {
            return oddPos.size() - 1;
        }
        else if (s1.size() == 2 && s2.size() != 2)
        {
            return evenPos.size() - 1;
        }
        else
        {
            return oddPos.size() - 1 + evenPos.size() - 1;
        }
    }
    return 0;
}

int main()
{
    vector<int> nums = {3,1,3,2,4,3};
    int answer = minimumOperations(nums);
    cout << "\n"
         << answer;
}