#include<bits/stdc++.h>
using namespace std;
bool flag=true;
vector<int> arr;
void kalindrome(vector<int>v, int x)
{
    arr.clear();
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
            continue;
        else
            arr.push_back(v[i]);
    }
}
bool check(){
    int i=0,j=arr.size()-1;
    flag=true;
    while(i<j)
    {
        if(arr[i]!=arr[j]){
            flag=false;
            break;
        }
        i++,j--;
    }
    return flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int i=0,j=n-1;
        int ans=0;
        bool k1,k2;
        while(i<j){
            if(v[i]!=v[j])
            {
                kalindrome(v,v[i]);
                k1=check();
                kalindrome(v,v[j]);
                k2=check();
                ans=1;
                break;
            }
            i++,j--;
        }
        if(ans==0)
            cout<<"YES"<<endl;
        else if(k1==true || k2==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
     }
    return 0;
}