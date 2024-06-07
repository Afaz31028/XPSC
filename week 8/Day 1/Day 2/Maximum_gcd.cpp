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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=3)
        {
            cout<<1<<endl;
            continue;
        }
        if(n%2==0)
        {
            cout<<n/2<<endl;
        }
        else
        {
            n--;
            cout<<n/2<<endl;
        }
    }
    return 0;
}