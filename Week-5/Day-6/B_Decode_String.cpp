#include <iostream>
#include <stack>
#include <string>
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

        stack<char> st;
        int i = n - 1;
        while (i >= 0)
        {
            if (s[i] == '0' && i >= 2)
            {
                int val = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                char c = 'a' + (val - 1);
                st.push(c);
                i -= 3;
            }
            else
            {
                int val = (s[i] - '0');
                char c = 'a' + (val - 1);
                st.push(c);
                i--;
            }
        }

        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << '\n';
    }

    return 0;
}
