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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int odd=0,ans=0,r=0,l=0;
        while(r<n)
        {
            if(v[r]%2==1)
            {
                odd++;
            }
            if((r-l)==k-1)
            {
                if(odd>0)
                    ans++;
                if(v[((r+1)-k)]%2==1)
                {
                    odd--;
                }
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}