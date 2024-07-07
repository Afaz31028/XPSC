#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        int x=v[0].first;
        int y=v[0].second;
        v.erase(v.begin());
        sort(v.begin(),v.end());
        bool ok=true;
        for(auto it: v)
        {
            if(it.first>x && it.second>=y)
            {
                ok=false;
                break;
            }
           
        }
        if(ok)
            cout<<x<<endl;
        else
            cout<<-1<<endl;


    }
    return 0;
}