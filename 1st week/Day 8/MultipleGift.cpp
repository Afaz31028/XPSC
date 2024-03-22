#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;
    ll ans=n;
    ll i=2;
    ll cnt=0;
    while(ans<=m)
    {
        ans=ans*i;
        cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}