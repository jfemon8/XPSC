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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i; j--)
            {
                int l = i, r = j;
                int cnt = 1, sum = a[l++] + a[r--];
                while (l < r)
                {
                    int temp = a[l] + a[r];
                    if (temp == sum)
                    {
                        cnt++;
                        l++;
                        r--;
                    }
                    else if (temp < sum)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
                ans = max(ans, cnt);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
