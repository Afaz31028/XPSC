#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
using namespace std;

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= v[i]; j++)
            {
                if (v[i] % j == 0)
                {
                    while (v[i] % j == 0)
                    {
                        cnt[j]++;
                        v[i] /= j;
                    }
                }
            }
            if (v[i] > 1)
            {
                cnt[v[i]]++;
            }
        }
        bool ok=true;
        for (auto it : cnt)
        {
            //cout << it.first << "-> " << it.second << endl;
            if(it.second%n!=0)
            {
                ok=false;
                break;
            }
        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}