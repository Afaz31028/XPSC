#include<bits/stdc++.h>
using namespace std;
int main()
{
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
    int l=0,r=0;
    vector<int> c;
    while(l<n && r<m)
    {
        while(a[l]<b[r] && l<n)
        {
            c.push_back(a[l]);
            l++;
        }
        while(a[l]>=b[r] && r<m)
        {
            c.push_back(b[r]);
            r++;
        }
        if(l==n)
        {
            while(r!=m)
            {
                c.push_back(b[r]);
                r++;
            }
        }
        if(r==m)
        {
            while(l!=n)
            {
                c.push_back(a[l]);
                l++;
            }
        }
    }
    for(int val : c)
    {
        cout<<val<<" ";
    }
    cout<<'\n';
    return 0;
}