#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2==0)
    {
        for(int i=1;i<=n/2;i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=1;i<n/2;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return 0;
}