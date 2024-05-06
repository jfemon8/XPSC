#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        vector<int> v;
        string s = "";
        int f, b, cnt = 0;
        while (q--)
        {
            int x;
            cin >> x;
            if (v.empty())
            {
                v.push_back(x);
                f = x;
                b = x;
                s += '1';
            }
            else if (b <= x and cnt == 0)
            {
                v.push_back(x);
                b = x;
                s += '1';
            }
            else if (b > x and f >= x and cnt == 0)
            {
                v.push_back(x);
                b = x;
                s += '1';
                cnt++;
            }
            else if (b <= x and f >= x and cnt == 1)
            {
                v.push_back(x);
                b = x;
                s += '1';
            }
            else if ((b == x || f == x) and cnt == 1)
            {
                v.push_back(x);
                b = x;
                s += '1';
            }
            else
            {
                s += '0';
            }
        }
        cout << s << '\n';
    }

    return 0;
}
