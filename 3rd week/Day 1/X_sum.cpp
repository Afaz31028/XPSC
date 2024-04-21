#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        ll ans=0,x,y,sum;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum=arr[i][j];
                x=j-1;
                y=j+1;
                for(int k=i-1;k>=0;k--)
                {
                    if(x>=0)
                    {
                        sum+=arr[k][x];
                        x--;
                    }
                    if(y<m)
                    {
                        sum+=arr[k][y];
                        y++;
                    }
                }
                x=j-1;
                y=j+1;
                for(int k=i+1;k<n;k++)
                {
                    if(x>=0)
                    {
                        sum+=arr[k][x];
                        x--;
                    }
                    if(y<m)
                    {
                        sum+=arr[k][y];
                        y++;
                    }
                }
                if(ans<sum)
                    ans=sum;

            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}