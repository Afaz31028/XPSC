#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int sum1,sum2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int mx=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int a=v[i];
            v[i]=1;
            sum1=0,sum2=0;
           for(int j=0;j<n-1;j++)
           {
               sum1+=abs(v[j]-v[j+1]);
           }
           v[i]=k;
           for(int j=0;j<n-1;j++)
           {
               sum2+=abs(v[j]-v[j+1]);
           }
           ans=max(sum1,sum2);
           mx=max(mx,ans);
           v[i]=a;
        }
        cout<<mx<<endl;
        
    }
	
	
}
