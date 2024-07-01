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
        ll n, m;
        cin >> n >> m;
        ll res, val=0;
        if (n > m)
        {
            res = (n - 1) * (n - 1);
            if (n % 2 == 1)
            {
                cout << res + m << endl;
            }
            else
            {
                val = 2 * n - m;
                cout << res + val << endl;
            }
        }
        else
        {
            res = (m - 1) * (m - 1);
            if (m% 2 == 0)
            {
                cout << res + n<< endl;
            }
            else
            {
                val = 2 * m - n;
                cout << res + val << endl;
            }
        }
    }
    return 0;
}