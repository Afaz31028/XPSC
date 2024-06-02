#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==1)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            for(int i=2;i<=2*n;i+=2)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}