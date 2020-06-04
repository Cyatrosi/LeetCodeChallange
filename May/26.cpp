/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3341/
**********************************************************************************************************************
Solution:
**/
    class Solution {
    public:
        int findMaxLength(vector<int>& nums) {
            map<int,int> m;
            int cnt = 0;
            m[0] = -1;
            int ans = 0;
            for(int i=0;i<nums.size();++i){
                cnt+=(nums[i] == 1) ? 1 : -1;
                if(m.find(cnt) == m.end())
                    m[cnt] = i;
                else
                    ans = max(ans,i-m[cnt]);            
            }            
            return ans;
        }
    };