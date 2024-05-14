#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    set<ll> st;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            st.insert(i);
            st.insert(n / i);
        }
    }
    if (st.size() < k)
    {
        cout << "-1\n";
    }
    else
    {
        auto it = st.begin();
        advance(it, k - 1);
        cout << *it << '\n';
    }

    return 0;
}
