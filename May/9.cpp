/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    bool isPerfectSquare(int num1) {        
        long long num = num1;
        if(num == 0LL)
            return false;
        
        for(long long i=0;i*i<=num;++i)
            if(i*i == num)
                return true;
        return false;        
    }
};