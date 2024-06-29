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
    int n, m;
    cin >> n >> m;
    multiset<int> a;
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
    {
        auto it = a.lower_bound(b[i]);
        if (*it == b[i])
        {
            cout << *(it) << "\n";
            a.erase(it);
        }
        else if(*it !=b[i] && it==a.begin())
        {
            cout<<-1<<endl;
        }
        else if (*it != b[i])
        {
            cout << *(--it) << endl;
            a.erase(it);
        }
    }
    return 0;
}