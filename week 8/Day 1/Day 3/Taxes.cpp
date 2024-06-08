#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
using namespace std;
bool isPrime(ll n)
{
    if(n==1)
        return false;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<1<<endl;
    }
    else if(n%2==0)
    {
        cout<<2<<endl;
    }
    else
    {
        if(isPrime(n-2))
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    return 0;
}