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
    vector<int>a;
    int n=0;
    int k=1;
    while(n<=1e5)
    {
        n=pow(2,k);
        a.push_back(n);
        k++;
    }
    while(t--)
    {
        int x;
        cin>>x;
        int ans,mx;
        for(int val:a)
        {
            if(val>x)
            {
                mx=val;
                break;
            }
            else
            {
                ans=val;
            }
        }
        //cout<<mx<<" "<<ans<<endl;
        int cnt=0;
        for(int i=ans;i<=mx;i+=2)
        {
            if(i>=x)
            {
                break;
            }
            cnt+=4;

        }
        cout<<cnt<<endl;

    }
    return 0;
}