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
        vector<int>a(n);
        int x,y;
        bool ok=false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0)
            {
                x=a[i];
            }
            if(i==n-1)
            {
                y=a[i];
            }
        }
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i]){
                ok=true;
                break;
            }
        }
        //cout<<x<<" "<<y<<endl;
        if(ok==false)
            cout<<0<<endl;
        else
        {
            if(x==n && y==1)
                cout<<3<<endl;
            else if(x==1 || y==n)
                cout<<1<<endl;
            else
                cout<<2<<endl;                     
        }

    }
    return 0;
}