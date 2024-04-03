#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int cur=0;
        for(auto it : mp)
        {
            cur=max(cur,it.second);
        }
        int op=0;
        while(cur<n)
        {
            int need=n-cur;
            int add=cur;
            op++;
            op+=min(need,add);
            cur+=min(add,need);
        }
        cout<<op<<endl;
    }
    return 0;
}