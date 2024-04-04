#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, s;
    cin >> n >> s;
    long long sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int seg = INT_MAX;
    int l = 0, r = 0;
    bool flag=false;
    while (r < n)
    {
        sum += v[r];
        if (sum >= s)
        {
            while (sum >= s && l<n)
            {
                flag=true;
                seg = min(seg, r - l + 1);
                sum -= v[l];
                l++;
            }
        }
        r++;
    }
    if(flag)
        cout << seg << '\n';
    else
        cout<<-1<<endl;
    return 0;
}