#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
#define Faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    int test=0;
    while (1)
    {
        int n,m;
        cin>>n>>m;
        test++;
        if (n == 0 && m == 0)
        {
            break;
        }
        else
        {
            cout<<"CASE# "<<test<<":"<<endl;
            vector<int> v(n + 1);
            for (int i = 1; i <= n; i++)
            {
                cin >>v[i];
            }
            sort(v.begin(), v.end());
            while (m--)
            {
                int val;
                cin>>val;
                int l = 1, r = n, mid, ans = 0,idx=10005;
                bool flag=false;
                while (l <= r)
                {
                    mid = (l + r) / 2;
                    if (v[mid]==val)
                    {
                        //ans=mid;
                        idx=min(idx,mid);
                        r=mid-1;
                    }
                    else if(v[mid]>val)
                    {
                        r=mid-1;
                    }
                    else
                        l=mid+1;
                }
                if(idx<10005)
                    cout<<val<<" found at "<<idx<<endl;
                else
                    cout<<val<<" not found"<<endl;

            }
        }
    }
    return 0;
}