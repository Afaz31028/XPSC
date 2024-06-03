#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        stack<int>capital,small;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
                capital.push(i);
            else if(s[i]>='a' && s[i]<='z' && s[i]!='b')
                small.push(i);
            else if(s[i]=='B' && !capital.empty())
            {
                s[capital.top()]='1';
                capital.pop();
            }
            else if(s[i]=='b' && !small.empty())
            {
                s[small.top()]='1';
                small.pop();
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]!='B' && s[i]!='b' && s[i]!='1')
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}