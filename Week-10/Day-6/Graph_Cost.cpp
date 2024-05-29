#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = 0;
        stack<long long> index, value;
        for (int i = 0; i < n; i++)
        {
            while (value.size() > 1 && value.top() > a[i])
            {
                long long cur = value.top();
                value.pop();
                if (cur >= value.top())
                {
                    index.pop();
                }
                else
                {
                    value.push(cur);
                    break;
                }
            }
            value.push(a[i]);
            index.push(i);
        }

        long long val = value.top();
        value.pop();
        long long idx = index.top();
        index.pop();
        while (!value.empty())
        {
            ans += max(val, value.top()) * (abs(idx - index.top()));
            val = value.top();
            value.pop();
            idx = index.top();
            index.pop();
        }

        cout << ans << '\n';
    }
}
