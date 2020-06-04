/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool hash[514];
        memset(hash,false,sizeof(hash));
        for(auto x:J)
            hash[x] = true;
        int ans = 0;
        for(auto x:S)
            if(hash[x])
                ++ans;
        return ans;
    }
};