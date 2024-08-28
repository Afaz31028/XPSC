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
        int n, k;
        cin >> n >> k;
        int sz = n * k;
        vector<ll> a(sz + 1);
        for (int i = 1; i <= sz; i++)
            cin >> a[i];
        int mid = (n + 1) / 2;
        // cout<<mid<<endl;
        ll sum = 0;
        int dif = n - mid + 1;
        int cnt = 0;
        if (n == 2)
        {
            for (int i = 1; i <= sz; i += 2)
            {
                sum += (a[i]);
                cnt++;
                if (cnt >= k)
                    break;
            }
        }
        else
        {
            int idx = 1;
            for (int i = sz; i >= 1; i--)
            {
                if (idx % dif == 0)
                {
                    sum += (a[i]);
                    cnt++;
                }
                idx++;
                if (cnt >= k)
                    break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}