class Solution {
public:
    static const long long MOD = 1000000007LL;

    long long minimumCost(vector<int>& nums, int k) {
        long long cost = 0;
        long long res = k;
        long long x = 1;

        for (int num : nums) {
            if (num > res) {
                long long need = (num - res + k - 1) / k;

                __int128 sum = (__int128)need * (2 * x + need - 1) / 2;
                cost = (cost + (long long)(sum % MOD)) % MOD;

                x += need;
                res += need * 1LL * k;
            }

            res -= num;
        }

        return cost;
    }
};