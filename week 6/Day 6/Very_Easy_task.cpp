#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x,y;
    cin>>n>>x>>y;
    auto ok=[&](int mid)
    {
        int a=mid/x;
        int b=mid/y;
        int total=a+b+1;
        return (total>=n);
    };
    int l=0,r=2e9,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans+min(x,y)<<endl;
    return 0;
}