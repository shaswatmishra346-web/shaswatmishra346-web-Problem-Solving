class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> freq(26, 0);
        int low = 0, maxCount = 0, maxLen = 0;
        for (int high = 0; high < n; high++) {
            freq[s[high] - 'A']++;
            maxCount = max(maxCount, freq[s[high] - 'A']);
            while ((high - low + 1) - maxCount > k) {
                freq[s[low] - 'A']--;
                low++;
            }
            maxLen = max(maxLen, high - low + 1);
        }

        return maxLen;
    }
};