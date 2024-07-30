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
    
    string a,b;
    cin>>a>>b;

    ll lenA=a.size();
    ll lenB=b.size();

    int i=lenA-1;
    int j=lenB-1;

    ll cnt=0;

    while(1)
    {
        if(i<0 || j<0)
        {
            break;
        }
        else if(a[i]!=b[j])
        {
            
            break;
        }
        else if(a[i]==b[j])
        {
            i--,j--;
            cnt++;
        }

    }
    ll ans=(lenA-cnt)+(lenB-cnt);
    cout<<ans<<endl;

    return 0;
}