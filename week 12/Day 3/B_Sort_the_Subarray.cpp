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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int l=0,r=n-1;
        while(r<n)
        {
            if(a[l]==b[l])
            {
                l++;
            }
            else if(a[r]==b[r])
            {
                r--;
            }
            else
                break;
        }
        for(int i=l-1;l>=0;i--)
        {
            if(b[i]==a[i] && b[i]<=b[i+1])
                l--;
            else
                break;
        }
        for(int i=r+1;i<n;i++)
        {
            if(b[i]==a[i] && b[i-1]<=b[i])
                r++;
            else
                break;
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
    return 0;
}