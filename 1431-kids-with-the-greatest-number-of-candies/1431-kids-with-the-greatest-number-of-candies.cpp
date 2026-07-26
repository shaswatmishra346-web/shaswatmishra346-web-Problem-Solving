class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& can, int extCan) {
        int n = can.size();
        int maxCan = 0;
        for (int i = 0; i < n; i++) {
            if (can[i] > maxCan) {
                maxCan = can[i];
            }
        }
        vector<bool> res(n);
        for(int i =0;i<n;i++){
            res[i] = (can[i]+extCan) >= maxCan;

        }
        return res;
    }
};