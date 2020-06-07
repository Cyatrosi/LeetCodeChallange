/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3352/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& v) {
        int n = v.size();
        for(int i=0;i<n;++i) {
            v[i][1] = -1*v[i][1];
        }
        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;--i) {
            v[i][1] = abs(v[i][1]);
            int j = i;
            vector<int> temp = v[i];
            int cnt = v[i][1];
            while(cnt-- && j<n-1) {
                v[j] = v[j+1];
                ++j;
            }
            v[j] = temp;
        }
        return v;
    }
};