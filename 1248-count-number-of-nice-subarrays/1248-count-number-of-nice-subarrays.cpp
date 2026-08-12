class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
    int atmost(vector<int>& nums,int k){
        int n=nums.size();
        int left=0;
        int cnt=0;
        int ans=0;
        for(int right=0;right<n;right++){
            if (nums[right]%2==1){
                cnt++;
            }
            while(cnt>k){
                if (nums[left]%2==1){
                    cnt--;
                }
                left++;
            }
            
            ans=ans+right-left+1;
            
        } 
        return ans; 

    }
};