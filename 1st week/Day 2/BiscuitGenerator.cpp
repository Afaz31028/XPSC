#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,T;
    cin>>t>>b>>T;
    int val=T/t;
    if(val>0)
        cout<<val*b<<endl;
    else
        cout<<0<<endl;
    return 0;
}