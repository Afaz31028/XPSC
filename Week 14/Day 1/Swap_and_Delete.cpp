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
        string s;
        cin>>s;
        int cnt_one=0,cnt_zero=0;
        for(char a: s)
        {
            if(a=='1')
            {
                cnt_one++;
            }
            else
            {
                cnt_zero++;
            }
        }
        for(auto x : s)
        {
            if(x=='1'){
                if(cnt_zero==0)
                {
                    break;
                }
                if(cnt_zero>0)
                {
                    cnt_zero--;
                }
            }
            else
            {
                if(cnt_one==0)
                {
                    break;
                }
                if(cnt_one>0)
                {
                    cnt_one--;
                }
            }
        }
        cout<<abs(cnt_one-cnt_zero)<<endl;
    }
    return 0;
}