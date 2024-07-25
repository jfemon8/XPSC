#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isPrime(ll val)
{
    if (val == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(val); i++)
    {
        if (val % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 1, cnt = 0;
        while (cnt < 2)
        {
            if (isPrime(n))
            {
                ans *= n;
                cnt++;
            }
            n++;
        }
        cout << ans << '\n';
    }

    return 0;
}
