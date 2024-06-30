#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define loop for (int i = 0; i < n; i++)
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds=tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else if(n==2 || n==3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==4)
    {
        cout<<"3 1 4 2"<<endl;
    }
    else
    {
         int x=n/2;
        int j=x;
        if(n%2==1)
        {
            for(int i=n;i>x+1;i--)
            {
                cout<<i<<" "<<j<<" ";
                j--;
            }
            cout<<x+1<<endl;
        }
        else
        {
            for(int i=n;i>x;i--)
            {
                cout<<i<<" "<<j<<" ";
                j--;
            }
        }
    }
    return 0;
}