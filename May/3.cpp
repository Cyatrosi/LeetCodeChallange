/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
**********************************************************************************************************************
Solution:
**/
#define ll long long
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {        
        vector<ll> hash(26,0);         
        for(auto x:magazine)
            ++hash[x-'a'];
        for(auto x:ransomNote){
            if(hash[x-'a']>0)
                --hash[x-'a'];
            else
                return false;
        }
        return true;
    }
};