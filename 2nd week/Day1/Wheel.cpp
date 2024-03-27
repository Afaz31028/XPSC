#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> a;
        for(int i=0;i<n;i++)
            cin>>v[i];
        int j=0;
        while(n--)
        {
            int x;
            string s;
            cin>>x>>s;
            for(int i=0;i<x;i++)
            {
                if(s[i]=='D')
                {
                    v[j]++;
                    if(v[j]>9)
                        v[j]=0;
                }
                else
                {
                    v[j]--;
                    if(v[j]<0)
                        v[j]=9;
                }
            }
            a.push_back(v[j]);
            j++;
        }
        for(int val : a)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        
        a.clear();
    }
    return 0;
}