class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums,goal)-atMost(nums,goal-1);
    }
    int atMost(vector<int>& nums, int goal){
        if(goal < 0) return 0;
        int high =0; int low =0; int sum =0; int cnt=0;
        for(int high =0;high<nums.size();high++){
            sum += nums[high];
            while(sum > goal){
                sum -= nums[low];
                low++;
            }
            cnt += high - low+1;
        }
        return cnt;
    }
};