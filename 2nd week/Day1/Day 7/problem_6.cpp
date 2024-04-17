#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,k;
    cin>>n>>k;

    vector<long long >v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    long long l=0,r=0;
    long long s=0;
    long long cnt=0;
    multiset<long long> ml;
    while(r<n)
    {
        ml.insert(v[r]);
        long long mx,mn;
        mx= *ml.rbegin();
        mn= *ml.begin();
        if((mx-mn)<=k)
        {
            cnt+=(r-l)+1;
        }
        else
        {
            while(l<n)
            {
                mx= *ml.rbegin();
                mn= *ml.begin();
                if((mx-mn)<=k)
                    break;
                auto it= ml.find(v[l]);
                ml.erase(it);
                l++;
            }
            mx= *ml.rbegin();
            mn= *ml.begin();
            cnt+=(r-l)+1;
        }
        r++;

    }
    cout<<cnt<<'\n';
    return 0;
}