#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    bool ans = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans = false;
            break;
        }
    }

    if (ans)
    {
        cout << 1;
    }
    else if (n % 2 == 0)
    {
        cout << 2;
    }
    else
    {
        ans = true;
        n -= 2;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << 2;
        }
        else
        {
            cout << 3;
        }
    }

    return 0;
}
