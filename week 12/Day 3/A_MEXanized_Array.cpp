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
        int n, k, x;
        cin >> n >> k >> x;
        int sum = 0;
        if ((n <x && x <k) || (k > (x + 1)) || n < k)
        {
            cout << -1 << endl;
            continue;
        }
        if (x > k)
        {
            sum += ((k * (k - 1)) / 2);
            int y = n - k;
            sum += y * x;
            cout << sum << endl;
            continue;
        }
        if (n >= k)
        {
            if (x != k)
            {
                sum += (k * (k - 1)) / 2;
                sum += (n - k) * x;
                cout << sum << endl;
            }
            else if (x == k)
            {
                sum += (k * (k - 1)) / 2;
                sum += (n - k) * (k - 1);
                cout<<sum<<endl;
            }
            continue;
        }
        if (x + 1 == k && n >= k)
        {
            sum += ((x * (x - 1)) / 2);
            int p = n - k;
            sum += p * x;
            cout << sum << endl;
            continue;
        }
    }
    return 0;
}