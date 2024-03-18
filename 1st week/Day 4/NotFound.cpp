#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag=false;
    int a[26]={0};
    for(char ch : s)
    {
        int x=ch-97;
        a[x]++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            char c=i+97;
            cout<<c;
            flag=true;
            break;
        }
    }
    if(flag==false)
        cout<<"None"<<endl;

    return 0;
}