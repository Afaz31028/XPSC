#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,sum;
    cin>>n>>sum;

    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    int l=0,r=0;
    long long s=0;
    long long seg=0;
    while(r<n)
    {
        s+=v[r];
        if(s<=sum) 
        {
            seg+=(r-l)+1;
        }
        else
        {
            while(s>sum && l<n)
            {
                s-=v[l];
                l++;
            }
            seg+=(r-l)+1;
        }
        r++;
    }
    cout<<seg<<endl;
    return 0;
}