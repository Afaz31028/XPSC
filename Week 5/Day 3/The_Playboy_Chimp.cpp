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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;cin>>k;
    while(k--){
        int val;
        cin>>val;
        int l=0,r=n-1,mid,ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(v[mid]<val)
            {
                ans=v[mid];
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        int i=0,j=n-1,res=-1;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(v[mid]>val)
            {
                res=v[mid];
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        if(ans==-1)
        {
            cout<<"X"<<" ";
        }
        else
            cout<<ans<<" ";
        if(res==-1)
            cout<<"X"<<endl;
        else
            cout<<res<<endl;
    }
    return 0;
}