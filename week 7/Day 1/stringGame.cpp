#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                flag=true;
                break;
            }
        }
        if(s.size()<2 || flag==false)
        {
            cout<<"Ramos"<<endl;
            continue;
        }
        int cnt=0,x=0;
        for(char val : s)
        {
            if(val=='1')
            {
                cnt++;
            }
            else
            {
                x++;
            }
        }
        int res=min(cnt,x);
        if(res%2==0)
            cout<<"Ramos"<<endl;
        else
            cout<<"Zlatan"<<endl;
    }
}
