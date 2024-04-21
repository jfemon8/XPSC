#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll dif = log2(x);
        ll count = 1;
        bool check = false;

        for (int i = dif - 1; i >= 0; i--)
        {
            if (x & 1 << i)
            {
                check = true;
            }
            else if (check)
            {
                count *= 2;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
