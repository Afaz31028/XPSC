#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int l=0,r=0,cnt1,cnt2,cur;
    long long ans=0;
    while(l<n)
    {
        cnt1=0,cnt2=0,cur=a[l];
        while(a[l]==cur && l<n)
        {
            cnt1++;
            l++;
        }
        while(cur>b[r] && r<m)
        {
            r++;
        }
        while(b[r]==cur && r<m)
        {
            cnt2++;
            r++;
        }
        ans+=(1LL * cnt1 * cnt2);

    }
    cout<<ans<<'\n';
    return 0;
}