#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans="";
        for (int i = 0; i < n; i++)
        {
            if (s[i + 2] == '0' and i+2<n and (i+3>=n or s[i+3]!='0'))
            {
                int ch = (s[i] - '0') * 10 + (s[i+1] - '0');
                ans.push_back((char)(96+ch));
                i = i + 2;
            }
            else
            {
                int cl = s[i]-'0';
                ans.push_back((char)(96+cl));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}