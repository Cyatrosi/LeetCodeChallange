/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3327/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int l = 0,r = v.size()-1;
        while(l<r){
            int mid = l + (r-l)/2;
            cout<<mid<<endl;
            if( (mid+1<=r && v[mid] != v[mid+1]) && (mid-1>=0 && v[mid] != v[mid-1]) )
                return v[mid];
            else if( (mid%2==1 && mid-1>=0 && v[mid-1] == v[mid]) || (mid%2==0 && mid+1<=r && v[mid+1] == v[mid]) )
                l = mid+1;
            else
                r = mid-1;
        }
        return v[l];
    }
};