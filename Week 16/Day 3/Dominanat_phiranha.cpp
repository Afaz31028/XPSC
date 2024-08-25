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
        int n;
        cin>>n;
        vector<ll>a(n);
        ll mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(a[i],mx);
        }
        //cout<<mx<<endl;
        ll ans=-1;
        for(int i=0;i<n;i++)
        {
            if((a[i]==mx) && ((a[i-1])<a[i]) || (a[i+1])<a[i])
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}