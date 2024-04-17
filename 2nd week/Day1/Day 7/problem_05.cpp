#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int l=0,r=0;
    map<int,int>mp;
    int mx=0;
    while(r<n)
    {
        mp[v[r]]++;
        if(mp.size()<=k)
        {
            mx+=(r-l)+1;
        }
        else if(mp.size()>k)
        {
            while(mp.size()>k)
            {
                mp[v[l]]--;
                if(mp[v[l]]==0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
            mx+=(r-l)+1;
        }
        r++;
    }
    cout<<mx<<endl;

    return 0;
}