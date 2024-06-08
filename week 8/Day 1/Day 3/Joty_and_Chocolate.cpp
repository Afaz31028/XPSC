#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (lli = 0; i < n; i++)
using namespace std;
ll GCD(ll a,ll b)
{
    return __gcd(a,b);
}

ll LCM(ll a,ll b)
{
    return ((a/GCD(a,b))*b);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n,a,b,p,q;
    ll ans=0,overlap,red,blue;
    cin>>n>>a>>b>>p>>q;
    red=(n/a);
    blue=(n/b);
    overlap=n/(LCM(a,b));
    red-=overlap;
    blue-=overlap;
    ans=(red*p+blue*q+overlap*max(p,q));
    cout<<ans<<endl;
    return 0;
}