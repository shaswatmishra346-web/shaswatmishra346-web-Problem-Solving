class Solution {
public:
    int minAddToMakeValid(string s) {
        int openCount=0;
        int closeCount=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                openCount++;
            }
            else if(openCount && s[i]==')')
            {
                openCount--;
            }
            else
            {
                closeCount++;
            }
        }
        return openCount+closeCount;
    }
};