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
const int maxN = 1e4+9;
int main()
{
    vector<ll> pw;
    for (int i = 1; i <= maxN; i++)
    {
        pw.push_back(pow(i, 3));
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool Ok = false;
        for (int i = 0; i < maxN; i++)
        {
            if(pw[i]>=x)
                break;
            ll need = x - pw[i];
            ll l = 0, r = maxN - 1, mid;
            bool flag = false;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    flag = true;
                    break;
                }
                else if (pw[mid] > need)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            if (flag)
            {
                Ok = true;
                break;
            }
        }
        if (Ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}