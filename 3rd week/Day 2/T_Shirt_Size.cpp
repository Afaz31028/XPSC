#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int val1=1,val2=1;
        for(char ch : a)
        {
            if(ch=='X')
            {
                val1+=1;
            }
            else if(ch=='S')
            {
                val1=(-1)*val1;
            }
            else if(ch=='L')
            {
                val1*=2;
            }
            else if(ch=='M')
                val1*=1;
        }
        for(char ch : b)
        {
            if(ch=='X')
            {
                val2+=1;
            }
            else if(ch=='S')
            {
                val2*=(-1);
            }
            else if(ch=='L')
            {
                val2*=2;
            }
            else if(ch=='M')
                val2*=1;
        }
        if(val1>val2)
            cout<<">"<<endl;
        else if(val1<val2)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }
    return 0;
}