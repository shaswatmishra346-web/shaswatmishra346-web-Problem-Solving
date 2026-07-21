class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int maxS = 0;
        unordered_map<char, int> f;

        for (int high = 0; high < s.size(); high++) {
            f[s[high]]++;
            while (f.size() < (high - low + 1)) {
                f[s[low]]--;
                if (f[s[low]] == 0) {
                    f.erase(s[low]);
                }
                low++;
            }

            maxS = max(maxS, high - low + 1);
        }

        return maxS;
    }
};