class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int high = 0;
        int low = 0;
        int maxLen = 0;
        int zerocnt = 0;

        for (int high = 0; high < nums.size(); high++) {
            if (nums[high] == 0) {
                zerocnt++;
            }
            while (zerocnt > k) {
                if (nums[low] == 0) {
                    zerocnt--;
                }
                low++;
            }
            if (zerocnt <= k) {
                maxLen = max(high - low + 1, maxLen);
            }
        }

        return maxLen;
    }
};