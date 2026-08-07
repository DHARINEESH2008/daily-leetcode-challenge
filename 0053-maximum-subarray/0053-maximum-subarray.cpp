class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = INT_MIN, best = INT_MIN;

        for (int num : nums) {
            curr = curr < 0 ? num : curr + num;
            best = max(best, curr);
        }

        return best;
    }
};