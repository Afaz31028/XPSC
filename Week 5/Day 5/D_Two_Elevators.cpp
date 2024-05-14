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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1)
        {
            cout<<1<<endl;
            continue;
        }
        int costA=a-1;
        int costB=abs(b-c);
        if(c==1)
        {
            if(costA<costB)
                cout<<1<<endl;
            else if(costA>costB)
                cout<<2<<endl;
            else
                cout<<3<<endl;
        }
        else
        {
            costB+=(c-1);
            if(costA<costB)
                cout<<1<<endl;
            else if(costA>costB)
                cout<<2<<endl;
            else
                cout<<3<<endl;
        }
    }
    return 0;
}