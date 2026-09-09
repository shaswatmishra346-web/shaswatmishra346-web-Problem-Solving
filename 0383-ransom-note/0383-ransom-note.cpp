class Solution {
public:
    bool canConstruct(string ransom, string magazine) {
        int freq[26] = {0};
        for (char c : magazine) {
            freq[c - 'a']++;
        }
        for (char c : ransom) {
            freq[c - 'a']--;

            if (freq[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};