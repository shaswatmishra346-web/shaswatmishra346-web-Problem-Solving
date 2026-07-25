class Solution {
public:
    int maxProduct(int n) {
        int maxi = -1;
        string s = to_string(n);

        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {
                int d1 = s[i] - '0';
                int d2 = s[j] - '0';
                maxi = max(maxi, d1 * d2);
            }
        }

        return maxi;
    }
};