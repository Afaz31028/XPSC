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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=n;i>=1;i--)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}