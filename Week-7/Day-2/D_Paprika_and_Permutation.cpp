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
        int n;
        cin >> n;
        set<int> st;
        for (int i = 1; i <= n; i++)
        {
            st.insert(i);
        }
        vector<int> a;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (st.find(x) != st.end())
            {
                st.erase(x);
            }
            else
            {
                a.push_back(x);
            }
        }
        sort(a.begin(), a.end());
        int i = 0;
        bool ans = true;
        for (int val : st)
        {
            if (val * 2 >= a[i++])
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << a.size() << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
