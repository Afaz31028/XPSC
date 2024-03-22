#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;

    bool check=false;
    for(int i=0;i<=c/b;i++)
    {
        if((c-(b*i))%a==0)
        {
            check=true;
            break;
        }
    }
    if(check)
        cout<<"Yes"<<'\n';
    else
        cout<<"No"<<'\n';
    return 0;
}