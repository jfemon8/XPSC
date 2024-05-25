#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    string s;
    cin >> n >> s;
    string r = s;
    reverse(r.begin(), r.end());
    map<char, vector<int>> ps, pr;
    for (int i = 0; i < n; i++)
    {
        ps[s[i]].push_back(i);
        pr[r[i]].push_back(i);
    }
    vector<int> seq(n);
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < ps[i].size(); j++)
        {
            seq[pr[i][j]] = ps[i][j];
        }
    }
    ll ans = 0;
    pbds<int> p;

    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(seq[i]);
        p.insert(seq[i]);
    }
    cout << ans;

    return 0;
}
