class Solution {
public:
    string defangIPaddr(string add) {
        string ans;
        int index = 0;
        while (index < add[index]) {
            if (add[index] == '.')
                ans += "[.]";
            else
                ans += add[index];
                index++;
        }
        return ans;
    }
};