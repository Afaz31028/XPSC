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
        int mn=abs(v[0]-v[1]);
        for(int i=1;i<n-1;i++)
        {
            int sum=max(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
            mn=min(sum,mn);
        }
        mn=min(mn,abs(v[n-1]-v[n-2]));
        cout<<mn<<endl;
    }
    return 0;
}