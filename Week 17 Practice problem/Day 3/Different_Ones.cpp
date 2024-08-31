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
        int n,m,k;
        cin>>n>>m>>k;

        vector<int>a(n);
        vector<int>b(m);
        map<int,int>cnt;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cnt[a[i]]=1;
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            if(cnt[b[i]]==1)
                cnt[b[i]]=5;
            if(cnt[b[i]]==0)
               cnt[b[i]]=2;    
        }
        int difA=k/2,difB=k/2;
        bool ok=false;
        for(int i=1;i<=k;i++)
        {
            if(cnt[i]==1)
                difA--;
            if(cnt[i]==2)
                difB--;
            if(cnt[i]==0)
                difA=-1;

        }
        if(difA>=0 && difB>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}