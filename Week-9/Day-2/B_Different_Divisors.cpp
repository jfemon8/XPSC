#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> primes;
void check(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return;
        }
    }
    primes.push_back(num);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 2; i <= 1e5; i++)
    {
        check(i);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int num1 = primes[(lower_bound(primes.begin(), primes.end(), d + 1)) - primes.begin()];
        int num2 = primes[(lower_bound(primes.begin(), primes.end(), d + num1)) - primes.begin()];
        cout << num1 * num2 << '\n';
    }

    return 0;
}
