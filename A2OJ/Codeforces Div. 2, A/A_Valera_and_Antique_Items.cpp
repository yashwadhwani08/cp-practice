#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n, v;
    vector<int> answer;
    cin>>n>>v;
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        vector<int> items(k);
        for(int j=0; j<k; j++)
        {
            cin>>items[j];
        }
        sort(items.begin(),items.end());
        if(v > items[0])
        {
            answer.push_back(i+1);
        }
    } 
    cout<<answer.size()<<"\n";
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
    return 0;
}
