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
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(k--)
    {
        int x;
        cin>>x;
        int l=1,r=n,mid,ans=n+1;
        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]>=x)
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}