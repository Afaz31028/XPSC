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
    string s;
    cin >> s;
    int len = s.size();
    map<char, int> cnt;
    for (char ch : s)
    {
        cnt[ch]++;
    }
    int x = 0,z=0;
    bool ok = false;
    char y;
    for (auto it : cnt)
    {
        if (it.second % 2 == 1)
        {
            y=it.first;
            z=it.second;
            x++;
        }
        if (x > 1 && len > 1)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        cout << "NO SOLUTION" << endl;
    else
    {
        for (auto it : cnt)
        {
            if (it.second % 2 == 0)
            {
                for (int i = 1; i <= it.second / 2; i++)
                {
                    cout<<it.first;
                }
            }
        }
        for(int i=1;i<=z;i++)
        {
            cout<<y;
        }
        vector<char>v;
        for (auto it : cnt)
        {
            if (it.second % 2 == 0)
            {
                for (int i = 1; i <= it.second / 2; i++)
                {
                    v.push_back(it.first);
                }
            }
        }
        reverse(v.begin(),v.end());
        for(char ch:v)
            cout<<ch;
        cout<<endl;
        
    }
    return 0;
}