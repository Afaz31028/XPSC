#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
using namespace std;
bool isPrime(int a)
{
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll A,B;
        cin>>A>>B;
        ll x=A;
        ll y=A*(B-1);
        ll z=A*B;
        if(B==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(B==2)
        {
            if(A==1)
            {
                cout<<"YES"<<endl;
                cout<<1<<" "<<3<<" "<<4<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                B=A*B;
                y=A*(B-1);
                z=A*B;
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
       

    }
    return 0;
}