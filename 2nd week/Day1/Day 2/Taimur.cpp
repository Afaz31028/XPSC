#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char freq[1];
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        if (n != 5)
            cout << "NO" << endl;
        else
        {
            int a=0,b=0,c=0,d=0,e=0;
            for (char ch : s)
            {
                if(ch=='T')
                    a++;
                else if(ch=='i')
                    b++;
                else if(ch=='m')
                    c++;
                else if(ch=='u')
                    d++;
                else if(ch=='r')
                    e++;
            }
            if (a==1 && b==1 && c==1 && d==1 && e==1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}