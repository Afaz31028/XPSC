#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=1000)
        cout<<n<<endl;
    else if(n>=100 && n<=999)
        cout<<0<<n<<endl;
    else if(n>=10 && n<=99)
        cout<<"00"<<n<<endl;
    else
        cout<<"000"<<n<<endl;
    return 0;
}