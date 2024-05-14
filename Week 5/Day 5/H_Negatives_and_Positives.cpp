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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int cnt = 0,mn =INT_MAX;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
                cnt++;
            sum += (abs(v[i]));
            mn=min(mn,abs(v[i]));
        }
        if(cnt%2==1)
        {
            cout<<sum-2*mn<<endl;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}