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
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int mn=1,mx=n;
        int l=1,r=n;
        int left=-1,right=-1;
        while(l<r)
        {
            if(a[l]==mn || a[r]==mn || a[l]==mx || a[r]==mx)
            {
                if(a[l]==mn)
                {
                    mn++;
                    l++;
                }
                else if(a[r]==mn)
                {
                    mn++;
                    r--;
                }
                else if(a[l]==mx)
                {
                    mx--;
                    l++;
                }
                else if(a[r]==mx)
                {
                    mx--;
                    r--;
                }
            }
            else
            {
                left=l;
                right=r;
            }
            if(left!=-1 && right!=-1)
            {
                break;
            }
        }
        if(left==-1 || right==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<left<<" "<<right<<endl;
        }

    }
    return 0;
}