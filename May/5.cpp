/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    int firstUniqChar(string s) {
        vector<long long> hash(26,0);
        for(auto x:s)
            ++hash[x-'a'];
        for(int i=0;s[i];++i) {
            if(hash[s[i]-'a'] == 1)
                return i;
        }
        return -1;
    }
};