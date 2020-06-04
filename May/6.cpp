/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    int majorityElement(vector<int>& a) {                
        int cnt = 0, ans = -1,n = a.size();
        for(int i=0;i<n;++i){
            if(cnt == 0){
                ans = i;
            }
            cnt+= (a[i] == a[ans]) ? 1 : -1;
        }
        return a[ans];
    }
};