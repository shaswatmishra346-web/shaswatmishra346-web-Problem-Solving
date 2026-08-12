class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int high = 0;
        int low = 0;
        int ans = 0;
        unordered_map<int, int> f;
        for (int high = 0; high < nums.size(); high++) {
            f[nums[high]]++;
            while (f[nums[high]] > k) {
                f[nums[low]]--;
                low++;
            }
            ans = max(high - low + 1, ans);
        }
        return ans;
    }
};