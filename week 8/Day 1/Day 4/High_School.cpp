#include <bits/stdc++.h>
#define ll unsigned long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
const ll N=1e7;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    double x=n*log(m);
    double y=m*log(n);
    if(x>y)
    {
        cout<<"<"<<endl;
    }
    else if(x<y)
        cout<<">"<<endl;
    else
        cout<<"="<<endl;
    return 0;
}