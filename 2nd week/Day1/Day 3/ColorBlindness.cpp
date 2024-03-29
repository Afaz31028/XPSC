#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<l;i++)
        {
            if(s1[i]=='G')
            {
                s1[i]='B';
            }
            if(s2[i]=='G')
                s2[i]='B';
        }
        bool flag=false;
        for(int i=0;i<l;i++)
        {
            if(s1[i]!=s2[i])
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}