/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3355/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(),m = t.length();
        bool dp[n+1][m+1];
        int i,j;
        for(i=0;i<=m;++i)
            dp[0][i] = true;
        for(i=1;i<=n;++i)
            dp[i][0] = false;
        for(i=1;i<=n;++i){
            for(j=1;j<=m;++j) {
                dp[i][j] = dp[i][j-1];
                if(s[i-1] == t[j-1])  
                    dp[i][j] = dp[i][j] || dp[i-1][j-1];
            }
        }
        return dp[n][m];
    }
};