#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds=tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        
        ll cnt=0;
        while(n>0)
        {
            if(n%k==0)
            {
                cnt++;
                n=n/k;
            }
            else
            {
                ll x=n%k;
                cnt+=x;
                n-=x;
            }

        }
        cout<<cnt<<endl;
    }
    return 0;
}