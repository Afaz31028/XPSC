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
        int n;
        string s;
        cin>>n>>s;
        int ans=INT_MAX;
        for(int i='a';i<='z';i++)
        {
            int change=0;
            int l=0,r=n-1;
            while(l<=r)
            {
                if(s[l]!=s[r])
                {
                    if(s[l]==i)
                    {
                        l++;
                        change++;
                    }
                    else if(s[r]==i)
                    {
                        r--;
                        change++;
                    }
                    else
                    {
                        change=INT_MAX;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans=min(ans,change);

        }
        if(ans==INT_MAX)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}