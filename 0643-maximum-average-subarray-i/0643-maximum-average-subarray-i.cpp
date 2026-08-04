class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        int sum = 0;
        int maxavg = INT_MIN;
        for (int high = 0; high < nums.size(); high++) {
            sum += nums[high];

            while (high - low + 1 > k) {
                    sum -= nums[low];
                    low++;
                }
            if (high - low + 1 == k) {
                maxavg = max(maxavg, sum);
            }
        }
        return (double)maxavg / k;
    }
};