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
        int sz=n*k;
        vector<int>a(sz+1);
        for(int i=1;i<=sz;i++)
            cin>>a[i];
        int i=1,j=sz;
        int mid;
        if(n%2==1){
            mid=(n/2)+1;
        }
        else
        {
            mid=n/2;  
        }     
        //cout<<mid<<endl;
        ll sum=0;
        int dif=n-1;
        while(i<j)
        {
            if(mid==1)
            {
                sum+=a[i];
                i+=2;
            }
            else
            {
                sum+=a[j-dif+1];
                i++;
                j=j-dif;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}