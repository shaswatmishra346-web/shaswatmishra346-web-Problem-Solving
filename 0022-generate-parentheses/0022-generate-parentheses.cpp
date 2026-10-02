class Solution {
public:
    void solve(int open, int close, string cur, vector<string>& ans) {
        if (open == 0 && close == 0) {
            ans.push_back(cur);
        } else if (open == 0) {
            solve(open, close - 1, cur + ')', ans);
        } else if (open < close) {
            solve(open, close - 1, cur + ')', ans);
            solve(open - 1, close, cur + '(', ans);
            return;
        } else {
            solve(open - 1, close, cur + '(', ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n, n, "", ans);
        return ans;
    }
};