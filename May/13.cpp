/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3328/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    void insertQ(deque<char> &q,char ch) {
        while(!q.empty() && q.back() > ch)
            q.pop_back();
       q.push_back(ch); 
    }        
    string removeKdigits(string s, int k) {
        int n = s.length();
        if(k>=n)
            return "0";
        deque<char> q;
        int i;
        for(i=0;i<=k && i<n;++i) {
            insertQ(q,s[i]);
        }
        string ans = "";    
        for(;i<n && !q.empty();++i){               
            ans += q.front();
            q.pop_front();
            insertQ(q,s[i]);
        }        
        if(!q.empty())
            ans += q.front();                    
        i=0;
        while(i<ans.length() && ans[i] == '0')
            ++i;
        ans = ans.substr(i);                
        return (ans == "") ? "0" : ans;
    }
};