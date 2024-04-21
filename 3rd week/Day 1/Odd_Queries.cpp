#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        vector<long long> pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=v[i]+pre[i-1];
        }
        while(q--)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            l--,r--;
            if(l>0)
            {
                long long sum=(pre[n-1]-pre[r])+pre[l-1];
                long long len=(r-l)+1;
                long long result=k*len+sum;
                long long val=result | 1;
                if(val==result)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(l==0)
            {
                long long sum=(pre[n-1]-pre[r]);
                int len=(r-l)+1;
                long long result=k*len+sum;
                long long val=result | 1;
                if(val==result)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }   

        }
    }
    return 0;
}