#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j, t, n;
    cin >> t;
    while(t--)
    {
        int T=0, i=0, m=0, u=0, r=0, c=0;
        cin >> n;
        char a[n];
        cin >> a;
        for(j=0; j<n; j++)
        {
            if(a[j]=='T')
            {
                T++;
            }
            else if(a[j]=='i')
            {
                i++;
            }
            else if(a[j]=='m')
            {
                m++;
            }
            else if(a[j]=='u')
            {
                u++;
            }
            else if(a[j]=='r')
            {
                r++;
            }
            else
            {
                c++;
            }
        }
        if(T==1 && i==1 && m==1 && u==1 && r==1 && c==0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
