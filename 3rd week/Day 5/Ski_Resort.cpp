#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define Faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void Afaz()
{
    ll n,k,t;
    cin>>n>>k>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll r=0;
    ll ans=0,val=0;
    while(r<n)
    {
        if(v[r]<=t)
        {
            val++;
        }
        if(r==n-1 || v[r]>t)
        {
            if(val>=k)
            {
                ll x=val-k+1;
                ans+=(x*(x+1))/2;
            }
            val=0;
        }
        r++;
    }
    cout<<ans<<endl;
}
int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        Afaz();
    }
    return 0;
}