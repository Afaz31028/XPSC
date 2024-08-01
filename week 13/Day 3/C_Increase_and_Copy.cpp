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

        int ans=sqrt(n);

        if(ans*ans >= n)
        {
            cout<<2*ans-2<<endl;
        }
        else if((ans+1)*ans >= n)
        {
            cout<<2*ans-1<<endl;
        }
        else
        {
            cout<<2*ans<<endl;
        }
    }
    return 0;
}