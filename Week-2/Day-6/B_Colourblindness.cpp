#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, c = 0;
    cin >> t;
    while (t--)
    {
        string e, d;
        cin >> n >> e >> d;
        for (int i = 0; i < n; i++)
        {
            if (e[i] == d[i] || (e[i] == 'B' && d[i] == 'G') || (e[i] == 'G' && d[i] == 'B'))
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if (c == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        c = 0;
    }
}