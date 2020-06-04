/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3349/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    void swap(int &a,int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    int twoCitySchedCost(vector<vector<int>>& v) {
        int ans = 0;
        int n = v.size()/2;
        vector<int> rf;
        for(auto x:v) {
            ans+=x[0];
            rf.push_back(x[1]-x[0]);
        }
        sort(rf.begin(),rf.end());
        for(int i=0;i<n;++i)
            ans+=rf[i];
        return ans;
    }
};