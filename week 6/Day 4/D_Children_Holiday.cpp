#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<tuple<int, int, int>> a(k);
    for (int i = 0; i < k; i++)
    {
        int t, z, r;
        cin >> t >> z >> r;
        a[i] = make_tuple(t, z, r);
    }
    vector<int> individual_make(k);
    auto OK = [&](int mid)
    {
        int remaining_ballon = n;
        vector<int> can(k);
        for (int i = 0; i < k; i++)
        {
            tuple<int, int, int> T = a[i];
            int t, z, r, each_seg, cur_ballon, remaining, full_seg,total_make_ballon;
            t = get<0>(T);
            z = get<1>(T);
            r = get<2>(T);
            each_seg = (t * z) + r;
            full_seg = mid / each_seg;
            remaining = mid % each_seg;
            total_make_ballon=(full_seg * z)+min(z, (remaining/t));
            total_make_ballon=min(remaining_ballon,total_make_ballon);
            remaining_ballon-=total_make_ballon;
            can[i]=total_make_ballon;

        }
        if(!remaining_ballon)
        {
            for(int i=0;i<k;i++)
            {
                individual_make[i]=can[i];
            }
        }
        return (!remaining_ballon);
    };

    int l = 0, r = 1e8, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (OK(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout<<ans<<endl;
    for(auto val: individual_make )
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}