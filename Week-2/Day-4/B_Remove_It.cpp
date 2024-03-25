#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a != x)
        {
            v.push_back(a);
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}
