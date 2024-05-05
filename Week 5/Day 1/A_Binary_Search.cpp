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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(k--)
    {
        int x;
        cin>>x;
        int l=0,r=n-1,idx=-1,mid;
        while(l<=r)
        {
            mid=(r+l)/2;
            if(v[mid]==x)
            {
                idx=mid;
                break;
            }
            else if(v[mid]<x)
                l=mid+1;
            else
                r=mid-1;

        }
        if(idx==-1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}