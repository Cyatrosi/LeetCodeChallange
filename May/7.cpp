/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/
**********************************************************************************************************************
Solution:
**/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#define pti pair<TreeNode*,int>
class Solution {
public:
    void recur(TreeNode *root,int x,int y,int level,vector<pti> &v, TreeNode *prev) {
        if(!root)
            return;
        if(root->val == x || root->val == y)
            v.push_back({prev,level});
        recur(root->left,x,y,level+1,v,root);
        recur(root->right,x,y,level+1,v,root);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root)
            return false;
        vector<pti> v;
        recur(root,x,y,0,v,NULL);
        if(v.size() == 2){
            if(v[0].second == v[1].second && v[0].first != v[1].first)
                return true;
            return false;
        } else {
            return false;
        }
    }
};