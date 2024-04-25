#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define Faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void Afaz()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    ll val=0;
    priority_queue<ll> pq;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0)
        {
            pq.push(v[i]);
        }
        else
        {
            if(pq.empty())
                continue;
            else
            {
                val+=pq.top();
                pq.pop();
            }
        }
    }
    cout<<val<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        Afaz();
    }
    return 0;
}