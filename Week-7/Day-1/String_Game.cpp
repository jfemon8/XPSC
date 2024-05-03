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
        string s;
        cin >> n >> s;
        int cnt = 0;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (!st.empty() and st.top() != s[i])
            {
                cnt++;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        cout << (cnt % 2 == 1 ? "Zlatan\n" : "Ramos\n");
    }

    return 0;
}
