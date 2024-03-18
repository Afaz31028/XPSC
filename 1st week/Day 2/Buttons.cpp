#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x1=a+b;
    int x2=a+(a-1);
    int x3=b+(b-1);
    int mx=max(x2,x3);
    if(x1>mx)
        cout<<x1<<endl;
    else
        cout<<mx<<endl;
    return 0;
}