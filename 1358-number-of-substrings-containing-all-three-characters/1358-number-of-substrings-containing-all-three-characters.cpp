class Solution {
public:
    int numberOfSubstrings(string s) {
        int low = 0;
        int cnt =0;
        unordered_map<char,int> f;
        for(int high =0;high < s.size();high++){
            f[s[high]]++;

            while (f['a'] > 0 && f['b'] > 0 && f['c'] > 0){
                cnt += s.size() - high ;
                f[s[low]]--;
                low++;

            }
   
    }
    return cnt;
    }
};