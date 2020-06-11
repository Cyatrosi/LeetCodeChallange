/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/3356/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
     int l = 0,r = v.size()-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(v[mid] == target)
                return mid;
            else if(v[mid] > target)
                r = mid-1;
            else
                l = mid + 1;
        }
        return l;
    }
};