#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, cnt1 = 0, cnt2 = 0, cmn = 0;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        map<int, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k && mp1[a[i]] == 0)
            {
                cnt1++;
                mp1[a[i]]++;
            }
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (b[i] <= k && mp2[b[i]] == 0 && mp1[b[i]] == 0)
            {
                cnt2++;
                mp2[b[i]]++;
            }
            else if (b[i] <= k && mp2[b[i]] == 0 && mp1[b[i]] == 1)
            {
                cnt2++;
                cmn++;
                mp2[b[i]]++;
            }
        }

        // cout << cnt1 << " " << cnt2 << " " << cmn << '\n';

        cnt1 -= cmn;
        cnt2 -= cmn;
        int need = 0;
        if (cnt1 < k / 2)
        {
            need += (k / 2) - cnt1;
        }
        if (cnt2 < k / 2)
        {
            need += (k / 2) - cnt2;
        }

        if (need <= cmn)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
