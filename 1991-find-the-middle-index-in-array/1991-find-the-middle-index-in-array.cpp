class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
     int n = nums.size();

        for (int i = 0; i < n; i++) {
            // Calculate prefix sum (left sum) dynamically inside the loop
            int prefix = 0;
            for (int j = 0; j < i; j++) {
                prefix += nums[j];
            }

            // Calculate suffix sum (right sum) dynamically inside the loop
            int suffix = 0;
            for (int j = i + 1; j < n; j++) {
                suffix += nums[j];
            }

            // Compare sums for index i
            if (prefix == suffix) {
                return i;
            }
        }

        return -1;
    }
};