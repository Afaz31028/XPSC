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
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        vector<pair<int, int>> v;
        vector<int>a;
        vector<int>f;

        int mn = min(s[0] - 97 + 1, s[len - 1] - 97 + 1);
        int mx = max(s[0] - 97 + 1, s[len - 1] - 97 + 1);
        for (int i = 1; i <len-1; i++)
        {
            int x = s[i] - 97 + 1;
            if (x >= mn && x <= mx)
            {
                v.push_back({x, i + 1});
            }
        }
        int siz=v.size();
        sort(v.rbegin(),v.rend());
        a.push_back(s[0]-97+1);
        for (pair<int, int> val : v)
        {
            a.push_back(val.first);
        }
        a.push_back(s[len-1]-97+1);
        ll sum = 0;
        int m=a.size();
        for(int i=1;i<m;i++)
        {
            sum+=(a[i-1]-a[i]);
        }
        cout<<abs(sum)<<" "<<m<<endl;
        if(s[0]>s[s.size()-1])
        {
            cout<<1<<" ";
            for(pair<int,int> w :v)
            {
                cout<<w.second<<" ";
            }
            cout<<len<<endl;
        }
        else
        {
            cout<<1<<" ";
            for(pair<int,int> w :v)
            {
                f.push_back(w.second);
            }
            for(int i=f.size()-1;i>=0;i--)
            {
                cout<<f[i]<<" ";
            }
            cout<<len<<endl;
        }
        v.clear();
        a.clear();
        f.clear();
    }
    return 0;
}
