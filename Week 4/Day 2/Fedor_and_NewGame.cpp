#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
#define Faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>all_mask;
    vector<int>a(m+1);
    for(int i=0;i<=m;i++)
        cin>>a[i];
    for(int i=0;i<=m;i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if((a[i]>>j)&1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        all_mask.push_back(v);
    }
    int ans=0;
    vector<int>fedorMask= all_mask[m];
    for(int i=0;i<all_mask.size()-1;i++)
    {
        int cnt=0;
        vector<int>mask= all_mask[i];
        for(int j=0;j<n;j++)
        {
            if(fedorMask[j] != mask[j])
                cnt++;
        }
        if(cnt<=k)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}