#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> a,b;
    int cnt=0;
    long long sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==1)
        {
            a.push_back(v[i]);
            sum1+=v[i];
            cnt++;
        }
        else
        {
            b.push_back(v[i]);
            sum2+=v[i];
        }
    }
    sort(a.begin(),a.end(),greater<int>());
    long long sum=0;
    int i=0;
    if(cnt%2==0)
    {
       cout<<sum1+sum2<<endl;
    }
    else
    {

        int val=a.back();
        a.pop_back();
        sum1-=val;
        cout<<sum1+sum2<<endl;
        
    }
    return 0;
}