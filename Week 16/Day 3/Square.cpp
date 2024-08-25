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
        int a,b,n,m;
        cin>>a>>b>>n>>m;
        bool ok=false;
        if((a==n) && ((b+m)==a))
            ok=true;
        if((a==m) && ((b+n)==a))
            ok=true;
        if((b==n) && ((a+m)==b))
            ok=true;
        if((b==m) && ((a+n)==b))
            ok=true;
    
        if(ok)
        {
            yes;
        }
        else
        {
            no;
        }

    }
    return 0;
}