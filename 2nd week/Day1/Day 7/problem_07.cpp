#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        map<char,int>mp;
        bool flag=false;
        int mx=0;
        int l=0,r=0;
       while(r<s.size())
       {
           mp[s[r]]++;
           if(mp.size()==k)
           {
               flag=true;
               mx=max(mx,r-l+1);
           }
           else if(mp.size()>k)
           {
               while(mp.size()>k)
               {
                   mp[s[l]]--;
                   if(mp[s[l]]==0)
                   {
                       mp.erase(s[l]);
                   }
                   l++;
               }
           }
           r++;
       }
        if(flag)
            return mx;
        else
            return -1;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}