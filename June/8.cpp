/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3354/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return ((n != 0) && (ceil(log2(n)) == floor(log2(n))));
    }
};