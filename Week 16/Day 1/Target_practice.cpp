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
    int t;
    cin>>t;
    while(t--){
        char a[10][10];
        bool ok[101][10]={false};
        int one=0,two=0,three=0,four=0,five=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(a[i][j]=='X')
                {
                    if(i==0  || i==9 || j==0 || j==9)
                        one++;
                    else if(i==1 || i==8 || j==1 || j==8)
                        two++;
                    else if(i==2 || i==7 || j==2 || j==7)
                        three++;
                    else if(i==3 || i==6 || j==3 || j==6)
                        four++;
                    else if(i==4 || i==5 || j==4 || j==5)
                        five++;
                }
            }
        }
        ll ans=(1*one)+(2*two)+(3*three)+(4*four)+(5*five);
        cout<<ans<<endl;
        //cout<<one<<" "<<two<<" "<<three<<" "<<four<<" "<<five<<endl;
    }

    return 0;
}