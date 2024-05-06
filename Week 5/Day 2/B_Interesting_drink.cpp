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
    Faster;
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int k;
    cin>>k;
    while(k--)
    {
        int l=0,r=n-1,mid;
        int val;
        cin>>val;
        ll ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<=val)
            {
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        cout<<ans+1<<endl;

    }

    return 0;
}