#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        map<char,int>mp;
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        for(char ch : s){
            mp[ch]++;
        }
        int cnt=0;
        for(auto it : mp)
        {
            if(it.second%2==1)
                cnt++;
        }
        int check=cnt-k;
        if(cnt<=k)
            cout<<"YES"<<endl;
        else if(check==0 || check==1 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        mp.clear();

    }
    return 0;
}