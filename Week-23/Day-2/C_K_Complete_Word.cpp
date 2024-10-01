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
        int n, k;
        string s;
        cin >> n >> k >> s;
        int len = n;

        for (int i = 0; i <= k - i - 1; i++)
        {
            vector<int> cnt(26);
            for (int j = i; j < n; j += k)
            {
                cnt[s[j] - 'a']++;
            }
            if (i < k / 2)
            {
                for (int j = k - 1 - i; j < n; j += k)
                {
                    cnt[s[j] - 'a']++;
                }
            }
            len -= *max_element(cnt.begin(), cnt.end());
        }

        cout << len << '\n';
    }

    return 0;
}
