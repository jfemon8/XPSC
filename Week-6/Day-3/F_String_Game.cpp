#include <bits/stdc++.h>
#define ll long long
using namespace std;

string t, p;
vector<ll> a;

bool good(ll x)
{
    ll i = 0, j = 0;
    string temp = "";
    unordered_set<ll> st;
    for (ll k = 0; k < x; k++)
    {
        st.insert(a[k] - 1);
    }

    ll lp = p.size();
    ll lt = t.size();

    for (ll k = 0; k < lt; k++)
    {
        if (st.find(k) == st.end())
        {
            temp += t[k];
        }
    }
    ll ltemp = temp.size();
    while (i < ltemp && j < lp)
    {
        while (i < ltemp && temp[i] != p[j])
        {
            i++;
        }
        if (temp[i] == p[j])
        {
            i++;
            j++;
        }
    }
    return j == lp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t >> p;
    ll lt = t.size();
    ll lp = p.size();
    a.resize(lt + 1);
    for (ll i = 0; i < lt; i++)
    {
        cin >> a[i];
    }
    if (lp == 0)
    {
        cout << lt << '\n';
    }
    else
    {
        ll l = 0, r = lt - lp + 1;
        while (r > l + 1)
        {
            ll m = (r + l) / 2;
            if (good(m))
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        cout << l << '\n';
    }

    return 0;
}
