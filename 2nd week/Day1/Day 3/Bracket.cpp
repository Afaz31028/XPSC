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
        string s;
        cin>>s;
        vector<char>v;
        for(char ch : s)
        {
            if(ch=='(')
                v.push_back('(');
            else if(ch==')' && !v.empty())
            {
                v.pop_back();
            }
        }
        cout<<v.size()<<endl;
        v.clear();
    }
    return 0;
}