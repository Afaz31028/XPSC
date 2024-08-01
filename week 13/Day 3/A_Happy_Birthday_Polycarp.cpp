#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
using namespace std;
const ll mx = 2e9;
void Beautiful(vector<ll>&list)
{
    ll x;
    for (int i = 1; i <= 9; i++)
    {
        x = i;
        while (x < mx)
        {
            list.push_back(x);
            x = x * 10 + i;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll>list;
    Beautiful(list);
    sort(list.begin(),list.end());

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans=0;
        for(int i=0;i<list.size();i++)
        {
            if(list[i] <= n)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}