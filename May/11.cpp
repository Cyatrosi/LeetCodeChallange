/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/
**********************************************************************************************************************
Solution:
**/
class Solution {
public:
    bool valid(int i,int j,int n,int m) {
        return (i>=0 && j>=0 && i<n && j<m);
    }
    void fill(vector<vector<int>>& v, int i, int j, int c, int pc) {
        int n = v.size();
        if(n == 0)
            return;
        int m = v[0].size();
        if(!valid(i,j,n,m))
            return;
        if(v[i][j]!=pc)
            return;        
        v[i][j] = c;        
        fill(v,i+1,j,c,pc);
        fill(v,i-1,j,c,pc);
        fill(v,i,j-1,c,pc);
        fill(v,i,j+1,c,pc);
    }    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {                
        if(image[sr][sc] != newColor)
            fill(image,sr,sc,newColor,image[sr][sc]);        
        return image;
    }
};