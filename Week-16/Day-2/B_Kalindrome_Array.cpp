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
        int n, x, y;
        cin >> n;
        vector<int> ls(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ls[i];
        }
        bool palindrom = true;
        for (int i = 0; i < n / 2; i++)
        {
            if (ls[i] != ls[n - i - 1])
            {
                x = ls[i];
                y = ls[n - i - 1];
                palindrom = false;
                break;
            }
        }
        if (palindrom)
        {
            cout << "YES\n";
        }
        else
        {
            bool kalindrom = true;
            int i = 0, j = n - 1;
            while (i < j)
            {
                if (ls[i] == ls[j])
                {
                    i++;
                    j--;
                }
                else if (ls[i] == x)
                {
                    i++;
                }
                else if (ls[j] == x)
                {
                    j--;
                }
                else
                {
                    kalindrom = false;
                    break;
                }
            }
            if (!kalindrom)
            {
                kalindrom = true;
                i = 0;
                j = n - 1;
                while (i < j)
                {
                    if (ls[i] == ls[j])
                    {
                        i++;
                        j--;
                    }
                    else if (ls[i] == y)
                    {
                        i++;
                    }
                    else if (ls[j] == y)
                    {
                        j--;
                    }
                    else
                    {
                        kalindrom = false;
                        break;
                    }
                }
            }
            if (kalindrom)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
