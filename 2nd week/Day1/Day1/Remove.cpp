#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    vector<int> x;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int val: v)
    {
        if(val!=k)
        {
            x.push_back(val);
        }
    }
    for(int val : x)
    {
        cout<<val<<" ";
    }
    return 0;
}