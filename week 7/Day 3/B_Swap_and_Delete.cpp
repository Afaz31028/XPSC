#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
#define Faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int one=0,zero=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0' && one>0)
                one--;
            else if(s[i]=='1' && zero>0)
                zero--;
            else
                break;
        }
        cout<<abs(one-zero)<<endl;
    }
    return 0;
}