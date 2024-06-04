#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<ll, ll> one, two, three, four, five;
    vector<string> a(n), on, tw, th, fo, fi;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ll curr = 0;
        for (ll j = 0; j < a[i].length(); j++)
            curr += a[i][j] - '0';

        if (a[i].length() == 2)
        {
            two[curr]++;
            tw.push_back(a[i]);
        }
        else if (a[i].length() == 4)
        {
            four[curr]++;
            fo.push_back(a[i]);
        }
        else if (a[i].length() == 1)
        {
            one[curr]++;
            on.push_back(a[i]);
        }
        else if (a[i].length() == 3)
        {
            three[curr]++;
            th.push_back(a[i]);
        }
        else
        {
            five[curr]++;
            fi.push_back(a[i]);
        }
    }

    ll ans = 0;

    for (auto i : two)
    {
        ll c = i.second;
        ans += c * c;
    }
    for (auto i : four)
    {
        ll c = i.second;
        ans += c * c;
    }
    for (auto i : one)
    {
        ll c = i.second;
        ans += c * c;
    }
    for (auto i : five)
    {
        ll c = i.second;
        ans += c * c;
    }
    for (auto i : three)
    {
        ll c = i.second;
        ans += c * c;
    }

    ll cnt = 0;
    for (ll i = 0; i < th.size(); i++)
    {
        ll p1 = th[i][0] - '0' + th[i][1] - '0' - th[i][2] + '0';
        cnt += one[p1];
        p1 = th[i][1] - '0' + th[i][2] - '0' - th[i][0] + '0';
        cnt += one[p1];
    }
    ans += cnt;

    cnt = 0;
    for (ll i = 0; i < fi.size(); i++)
    {
        ll p1 = fi[i][0] - '0' + fi[i][1] - '0' + fi[i][2] - '0' - (fi[i][3] - '0' + fi[i][4] - '0');
        cnt += one[p1];
        p1 = fi[i][2] - '0' + fi[i][3] - '0' + fi[i][4] - '0' - (fi[i][0] - '0' + fi[i][1] - '0');
        cnt += one[p1];
        p1 = fi[i][1] - '0' + fi[i][2] - '0' + fi[i][3] - '0' + fi[i][4] - '0' - (fi[i][0] - '0');
        cnt += three[p1];
        p1 = fi[i][1] - '0' + fi[i][2] - '0' + fi[i][3] - '0' + fi[i][0] - '0' - (fi[i][4] - '0');
        cnt += three[p1];
    }
    ans += cnt;

    cnt = 0;
    for (ll i = 0; i < fo.size(); i++)
    {
        ll p1 = fo[i][0] - '0' + fo[i][1] - '0' + fo[i][2] - '0' - (fo[i][3] - '0');
        cnt += two[p1];
        p1 = fo[i][3] - '0' + fo[i][1] - '0' + fo[i][2] - '0' - (fo[i][0] - '0');
        cnt += two[p1];
    }
    ans += cnt;

    cout << ans << '\n';

    return 0;
}
