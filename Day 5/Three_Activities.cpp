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
    Faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,ll>>p1(n),p2(n),p3(n);

        for(int i=0;i<n;i++)
        {
            cin>>p1[i].first;
            p1[i].second=i;
        }
        for(int i=0;i<n;i++)
        {
            cin>>p2[i].first;
            p2[i].second=i;
        }
        for(int i=0;i<n;i++)
        {
            cin>>p3[i].first;
            p3[i].second=i;
        }
        sort(p1.rbegin(),p1.rend());
        sort(p2.rbegin(),p2.rend());
        sort(p3.rbegin(),p3.rend());
        ll res=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(p1[i].second !=p2[j].second && p1[i].second !=p3[k].second && p2[j].second !=p3[k].second )
                    {
                        res=max(p1[i].first+p2[j].first+p3[k].first,res);
                    }
                }
            }
        }
        cout<<res<<endl;

    }
    return 0;
}