#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        stack<char> st;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (!st.empty() && st.top() == '(' && s[i] == ')')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        cout << st.size() / 2 << "\n";
    }

    return 0;
}
