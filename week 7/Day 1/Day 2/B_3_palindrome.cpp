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
    int n;
    cin>>n;
    char s='a';
    vector<char>v;
    char b='b';
    for(int i=1;i<=n;i++)
    {
        if(v.size()<n)
            v.push_back(s);
        if(v.size()<n)
            v.push_back(s);
        if(v.size()<n)
            v.push_back(b);
        if(v.size()<n)
            v.push_back(b);
    }
    for(char val: v)
        cout<<val;
    cout<<endl;
    return 0;
}