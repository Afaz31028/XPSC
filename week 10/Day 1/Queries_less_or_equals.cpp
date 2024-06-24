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
template<typename T> using pbds=tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    pbds<int>p;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        p.insert(x);
    }
    for(int i=1;i<=m;i++)
    {
        int x;
        cin>>x;
        cout<<p.order_of_key(x+1)<<" ";
    }
    cout<<endl;
    return 0;
}