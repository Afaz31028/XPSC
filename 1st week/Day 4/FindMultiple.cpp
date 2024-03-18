#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int i=1;
    while(1)
    {
        int val=n*i;
        if(val>b)
        {
            cout<<-1<<endl;
            break;
        }
        if(val>=a && val<=b)
        {
            cout<<val<<endl;
            break;
        }
        i++;
    }
    return 0;
}