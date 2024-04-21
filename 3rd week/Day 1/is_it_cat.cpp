#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        string s;
        cin >> s;
        vector<char> v;
        for(int i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
        v.push_back(s[0]);
        for(int i=1;i<l;i++)
        {
            if(s[i]==s[i-1])
                continue;
            else
                v.push_back(s[i]);
        }
        if(v.size()==4)
        {
            if(v[0]=='m' && v[1]=='e' && v[2]=='o' && v[3]=='w')
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;

        v.clear();
    }
    return 0;
}