#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        int x,y;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int res=a[i]-b[i];
            if(res>=mx)
            {
                mx=res;
                x=a[i];
                y=b[i];
            }
        }
        int val=x-y;
        if(val<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]-val;
        }
        //cout<<"Answer:"<<endl;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i] && b[i]!=0)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}