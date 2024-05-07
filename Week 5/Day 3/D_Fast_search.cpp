#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
#define Faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<int>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll k;
    cin>>k;
    while(k--)
    {
        ll x,y;
        cin>>x>>y;
        ll l=0,r=n-1,ans=-1,mid;
        while(l<=r)
        {
            mid=(r+l)/2;
            if(v[mid]>=x)
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;

        }
        ll i=0,j=n-1,mid2;
        ll val=-1;
        while(i<=j)
        {
            mid2=(i+j)/2;
            if(v[mid2]<=y)
            {
                val=mid2;
                i=mid2+1;
            }
            else
                j=mid2-1;
        }
        if(v[ans]>=x && v[val]<=y)
            cout<<(val-ans)+1<<" ";
        else
            cout<<0<<endl;
    }
    return 0;
}