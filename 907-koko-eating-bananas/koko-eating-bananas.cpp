class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mn = 1;
        int mx = *max_element(piles.begin(), piles.end());

        while (mn <= mx) {
            int mid = mn + (mx - mn) / 2;

            long long hours = 0;

            for (int pile : piles) {
                hours += (pile + mid - 1) / mid;

                if (hours > h)
                    break;
            }

            if (hours <= h) {
                mx = mid - 1;
            } else {
                mn = mid + 1;
            }
        }

        return mn;
    }
};