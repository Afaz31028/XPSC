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
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll cost=0;
        vector<ll> dif;
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                int x=a[i-1]-a[i];
                dif.push_back(x);
                a[i]=a[i-1];
            }
        }
        sort(dif.begin(),dif.end());
        int s=dif.size();
        ll cur=0;
        for(int i=0;i<dif.size();i++)
        {
            cost+=((s+1)*(dif[i]-cur));
            cur=max(dif[i],cur);
            s--;
        }
        cout<<cost<<endl;
    }
    return 0;
}