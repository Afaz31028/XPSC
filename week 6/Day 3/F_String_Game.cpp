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
    string t,p;
    cin>>t;
    cin>>p;
    int n=t.size();
    int m=p.size();
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    auto OK=[&](ll mid)
    {
        vector<bool>bad(n+1,false);
        for(int i=0;i<mid;i++)
            bad[v[i]]=true;
        int j=0;
        bool find=false;
        for(int i=0;i<n;i++)
        {
            if(t[i]==p[j] && !bad[i+1])
            {
                j++;
            }
            if(j==m)
            {
                find=true;
                break;
            }
        }
        return find;

    };
    int l=0,r=n,mid,ans=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(OK(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}