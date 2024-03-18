#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int val=b-a;
    if(val<0)
        cout<<0<<endl;
    else
        cout<<val+1<<endl;
    return 0;
}