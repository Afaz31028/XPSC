#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
#define Faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1), v(n+1);
    for (int i = 1; i<=n; i++)
    {
        cin >> a[i];
    }
    v[1] = a[1];
    for (int i = 2; i<=n; i++)
    {
        v[i] = a[i] + v[i - 1];
    }
    int k;
    cin >> k;
    while (k--)
    {
        int l = 1, r = n, mid;
        int val,ans=1;
        cin>>val;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid]>=val)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}