#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int cal(vector<ll> &a, int idx, ll need)
{
    ll sum = 0;
    while (idx < a.size())
    {
        sum += a[idx];
        if (sum >= need)
        {
            break;
        }
        idx++;
    }
    return idx;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> vec[3];
    for (int i = 0; i < 3; i++)
    {
        vec[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    ll total = accumulate(vec[0].begin(), vec[0].end(), 0ll);
    ll need = (total + 2) / 3;
    vector<int> arr = {0, 1, 2};

    do
    {
        int fi = arr[0];
        int se = arr[1];
        int th = arr[2];

        int r1 = cal(vec[fi], 0, need);
        int r2 = cal(vec[se], r1 + 1, need);
        int r3 = cal(vec[th], r2 + 1, need);

        if (r3 >= n)
        {
            continue;
        }

        vector<array<int, 3>> ans(3);
        ans[0] = {fi, 0, r1};
        ans[1] = {se, r1 + 1, r2};
        ans[2] = {th, r2 + 1, r3};

        sort(ans.begin(), ans.end());
        for (int i = 0; i < 3; i++)
        {
            cout << ans[i][1] + 1 << " " << ans[i][2] + 1 << " ";
        }
        cout << '\n';
        return;

    } while (next_permutation(arr.begin(), arr.end()));

    cout << "-1\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}