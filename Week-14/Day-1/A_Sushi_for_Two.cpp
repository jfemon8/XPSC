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

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 1, maxSize = 1, one = 1, two = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 1 && a[i - 1] == 1)
        {
            one++;
        }
        else if (a[i] == 2 && a[i - 1] == 2)
        {
            two++;
        }
        else if (a[i] == 1 && a[i - 1] == 2)
        {
            maxSize = min(one, two);
            ans = max(ans, 2 * maxSize);
            one = 1;
        }
        else if (a[i] == 2 && a[i - 1] == 1)
        {
            maxSize = min(one, two);
            ans = max(ans, 2 * maxSize);
            two = 1;
        }
    }
    maxSize = min(one, two);
    ans = max(ans, 2 * maxSize);
    cout << ans << '\n';

    return 0;
}
