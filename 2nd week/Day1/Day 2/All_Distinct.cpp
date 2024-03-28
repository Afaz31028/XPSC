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
        for(int i=0;i<n;i++)
            cin>>v[i];
        set<int> s;
        for(int val : v)
            s.insert(val);
        int x=n-s.size();
        if(x%2==1)
        {
            cout<<s.size()-1<<endl;
        }
        else
        {
            cout<<s.size()<<endl;
        }
        s.clear();

    }
    return 0;
}