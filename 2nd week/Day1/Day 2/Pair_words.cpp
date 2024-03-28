#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l;
        cin>>n>>l;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int sum;
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            string a=v[i];
            for(int j=i+1;j<n;j++)
            {
                string b=v[j];
                sum=0;
                for(int k=0;k<l;k++)
                {
                    sum+=abs(a[k]-b[k]);
                }
                ans=min(ans,sum);
            }

        }
        cout<<ans<<endl;
        v.clear();

    }
    return 0;
}