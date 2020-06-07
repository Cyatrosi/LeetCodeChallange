/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3351/
**********************************************************************************************************************
Solution:
**/
class Solution {
    vector<int> v;
    int sum;
public:    
    Solution(vector<int>& w) {        
        this->sum = 0;
        for(auto x:w) {
            (this->v).push_back(x);
            (this->sum)+=x;
        }
    }
    
    int pickIndex() {        
        int n = (this->v).size(),i;        
        int indexVal =  rand() % (this->sum) + 1,c=0;
        i=0;        
        for(auto x:(this->v)) {                   
            if(indexVal>c && indexVal<=c+x)
                return i;
            c+=x;
            ++i;
        }
        return n-1;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */