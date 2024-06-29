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
    int n;
    cin>>n;
    vector<int>v(n);
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=0;
    int cnt=0;
    while(r<n)
    {
        s.insert(v[r]);
        if((r-l+1)==s.size())
        {
            cnt=max(cnt,r-l+1);
            r++;
        }
        else
        {
            while(r<n && s.count(v[r]))
            {
                s.erase(v[l]);
                l++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}