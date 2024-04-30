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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        //sort(v.begin(),v.end());
        ll sum=v[0];
        for(int i=1;i<n;i++)
        {
            sum=(sum|v[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}