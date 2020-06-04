/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    int power2(int n) {
        if(n==0)
            return 1;
        if(n==1)
            return 2;
        int ans = power2(n/2);
        if(n&1)
            return ans*ans*2;
        return ans*ans;
    }
    int findComplement(int n) {
        int ans = 0,i = 0;        
        while(n) {
            ans += (n%2 == 0) ? power2(i) : 0;
            n/=2;
            ++i;
        }
        return ans;
    }
};
