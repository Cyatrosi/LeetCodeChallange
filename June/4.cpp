/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    void swap(char &a,char &b) {
        char temp = a;
        a = b;
        b = temp;
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i=0,j=n-1;
        while(i<j) {
            swap(s[i],s[j]);
            ++i;--j;
        }
    }
};