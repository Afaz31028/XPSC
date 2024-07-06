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
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    vector<int> dif(n+2);
    for(int i=1;i<=q;i++)
    {
        int l,r;
        cin>>l>>r;
        dif[l]++;
        dif[r+1]--;
    }

    for(int i=1;i<=n;i++)
    {
        dif[i]=dif[i-1]+dif[i];
    }

    sort(a.rbegin(),a.rend());
    sort(dif.rbegin(),dif.rend());

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(1LL * a[i]*dif[i]);
    }
    cout<<ans<<endl;
    return 0;
}