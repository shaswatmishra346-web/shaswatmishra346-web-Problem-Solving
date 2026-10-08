class Solution {
public:
    string removeOuterParentheses(string s) {
        string v;
        int cnt = 0;
        for(auto c : s){
            if(c == '('){
                //should have extra opening bracket
                if(cnt > 0){
                    v += c;
                }
                cnt++;
            }
            else{
                //should have extra closung bracket
                cnt--;
                if(cnt > 0){
                    v += c;
                }
            }
        }
        return v;
    }
};