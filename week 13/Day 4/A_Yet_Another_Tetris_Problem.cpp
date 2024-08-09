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
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(odd==0 || even==0)
            yes;
        else
            no;
    }
    return 0;
}