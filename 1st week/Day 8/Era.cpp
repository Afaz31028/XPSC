#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int cnt=0;
        int pos=1;
        for(int i=0;i<n;i++)
        {
            if(v[i]>pos)
            {
               cnt=cnt+(v[i]-pos);
               pos=v[i]+1;
            }
            else
                pos++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}