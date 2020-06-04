/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) {
        int n = v.size();
        for(int i=1;i<n-1;++i){
            if( ((v[i][1] - v[i-1][1])*(v[i+1][0] - v[i][0])) != ((v[i+1][1] - v[i][1])*(v[i][0] - v[i-1][0])) )
                return false;                
        }
        return true;
    }
};