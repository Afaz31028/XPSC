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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag=false;
        int x,y,z;
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                x=i-1,y=i,z=i+1;
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            cout<<x+1<<" "<<y+1<<" "<<z+1<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}