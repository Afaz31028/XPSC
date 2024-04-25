#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
#define Faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void Afaz()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll total=0;
    int change=0;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        int L=i;
        int R=n-i-1;
        if(s[i]=='L')
        {
            if(L<R)
            {
                change++;
                total+=R;
                v.push_back(R-L);
            }
            else
                total+=L;
        }
        else
        {
            if(L>R)
            {
                change++;
                total+=L;
                v.push_back(L-R);
            }
            else
                total+=R;
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    vector<ll>ans(n+1);
    for(int i=change;i<=n;i++)
        ans[i]=total;
    for(int i=change-1;i>=1;i--)
    {
        total-=v[i];
        ans[i]=total;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--){
        Afaz();
        cout<<endl;
    }
    return 0;
}