/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {        
        vector<int> trusted(n,0),trusts(n,0);
        for(auto x:trust){
            ++trusts[x[0]-1];
            ++trusted[x[1]-1];
        }
        int ans = -1;
        for(int i=0;i<n;++i) {            
            if(trusts[i] == 0 && trusted[i] == n-1){
                if(ans == -1)
                    ans = i+1;
                else
                    return -1;
            }                
        }        
        return ans;
    }
};