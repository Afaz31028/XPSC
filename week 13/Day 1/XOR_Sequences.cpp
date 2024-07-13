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
        int x,y;
        cin>>x>>y;
        vector<int>a,b;
        for(int i=0;i<=63;i++)
        {
            if((x>>i) &1)
                a.push_back(1);
            else
                a.push_back(0);
            if((y>>i)&1)
                b.push_back(1);
            else
                b.push_back(0);
        }
        int cnt=0;
        for(int i=0;i<=63;i++)
        {
            if(a[i]!=b[i])
                break;
            if(a[i]==b[i])
                cnt++;
        }
        ll ans=pow(2,cnt);
        cout<<ans<<endl;

       
        
    }
    return 0;
}