class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int n = nums.size();
        int suffix = 0;
        for (int i = 0; i < n; i++) {
            suffix += nums[i];
        }
        int prefix = 0;

        for (int i = 0; i < n; i++) {

            suffix -= nums[i];
            if (prefix == suffix) {
                return i;
            }
            prefix += nums[i];
        }
        return -1;
    }
};