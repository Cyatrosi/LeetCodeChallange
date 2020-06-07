/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3353/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    int change(int n, vector<int>& coins) {
        int dp[n+1],i;
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        for(auto x:coins) {
            for(int i=x;i<=n;++i)
                dp[i]+=dp[i-x];
        }
        return dp[n];
    }
};
