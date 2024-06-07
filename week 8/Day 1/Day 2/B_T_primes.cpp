#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
const long long N=1e6+5;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    vector<bool>Ok(N,true);
    for(ll i=2;i*i<=N;i++)
    {
        if(Ok[i])
        {
            for(ll j=i+i;j<=N;j+=i)
                Ok[j]=false;
        }
    }
    while(t--){
        ll n;
        cin>>n;
        ll x=sqrt(n);
        if(x*x!=n || n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(Ok[x])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}