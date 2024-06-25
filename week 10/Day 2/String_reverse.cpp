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
    string s;
    cin>>s;
    string r=s;
    reverse(r.begin(),r.end());
    map<char, vector<int>> pos_s,pos_r;
    for(int i=0;i<n;i++)
    {
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }
    vector<int> permutation(n);
    for(char i='a';i<='z';i++)
    {
        for(int j=0;j<pos_s[i].size();j++)
        {
            permutation[pos_r[i][j]]=pos_s[i][j];
        }
    }
    pbds<int>p;
    long long ans=0;
    for(int i=n-1;i>=0;i--)
    {
        ans+=p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    cout<<ans<<endl;
    return 0;
}