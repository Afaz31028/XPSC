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
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]+=(i+1);        }
        sort(a.begin(),a.end());
        ll cost=0,cnt=0;
        for(int i=0;i<n;i++){
            if(cost>c)
            {
                break;
            }
            cost+=a[i];
            if(cost<=c)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}