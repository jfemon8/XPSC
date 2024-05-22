#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long countSubarraysWithSumX(int n, long long x, const vector<long long> &arr)
{
    unordered_map<long long, long long> prefix_count;
    prefix_count[0] = 1;

    long long current_prefix_sum = 0;
    long long count_subarrays = 0;

    for (long long num : arr)
    {
        current_prefix_sum += num;

        if (prefix_count.find(current_prefix_sum - x) != prefix_count.end())
        {
            count_subarrays += prefix_count[current_prefix_sum - x];
        }

        prefix_count[current_prefix_sum]++;
    }

    return count_subarrays;
}

int main()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << countSubarraysWithSumX(n, x, arr) << endl;

    return 0;
}
