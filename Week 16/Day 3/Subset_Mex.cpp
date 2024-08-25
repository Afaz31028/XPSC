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
        map<int,int> a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[x]++;
        }
        int val1,val2;
        for(int i=0;i<=101;i++)
        {
            if(a[i]!=0)
            {
                a[i]--;
            }
            else
            {
                val1=i;
                break;
            }
        }
        for(int i=0;i<=101;i++)
        {
            if(a[i]!=0)
            {
                a[i]--;
            }
            else
            {
                val2=i;
                break;
            }
        }
        cout<<(val1+val2)<<endl;
    }
    return 0;
}