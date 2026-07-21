class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(256, 0); 
        int low = 0, maxCount = 0, maxLen = 0;

        for (int high = 0; high < s.size(); high++) {
            freq[s[high]]++; 
            maxCount = max(maxCount, freq[s[high]]);

            while ((high - low + 1) - maxCount > k) {
                freq[s[low]]--;
                low++;
            }

            maxLen = max(maxLen, high - low + 1);
        }

        return maxLen;
    }
};