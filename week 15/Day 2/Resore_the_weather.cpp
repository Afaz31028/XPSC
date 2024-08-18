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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a;
        vector<int>b(n),c(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back({x,i});
        }
        sort(a.begin(),a.end());
        // for(auto it: a)
        //     cout<<it.first<<" "<<it.second<<endl;
        // cout<<endl;
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(b.begin(),b.end());
        int i=0;
        for(auto it : a)
        {
            c[it.second]=b[i];
            i++;
        }
        for(int val: c)
        {
            cout<<val<<" ";
        }
        cout<<endl;


    }
    return 0;
}