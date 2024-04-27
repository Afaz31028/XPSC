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
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int XOR=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            XOR^=v[i];
        }
        if(n%2==0)
        {
            if(XOR==0)
                cout<<0<<endl;
            else
                cout<<-1<<endl;
        }
        else
            cout<<XOR<<endl;
    }
    return 0;
}