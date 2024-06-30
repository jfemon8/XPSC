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
        vector<int> a(n), b(n);
        ll cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i] && a[i] == 1)
            {
                cnt1++;
            }
            else if (a[i] < b[i] && b[i] == 1)
            {
                cnt2++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                if (a[i] == -1)
                {
                    if (cnt1 > cnt2)
                    {
                        cnt1--;
                    }
                    else
                    {
                        cnt2--;
                    }
                }
                else if (a[i] == 1)
                {
                    if (cnt1 > cnt2)
                    {
                        cnt2++;
                    }
                    else
                    {
                        cnt1++;
                    }
                }
            }
        }

        cout << min(cnt1, cnt2) << '\n';
    }

    return 0;
}