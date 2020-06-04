/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3339/
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
class Solution {
public:
    TreeNode* construct(vector<int>& pre, int l, int r){
        //cout<<l+1<<"-"<<r+1<<endl;
        int n = pre.size();
        if(r>=n || l<0)
                return NULL;
        if(l>r)
            return NULL;
        if(l == r)
            return new TreeNode(pre[l]);
        TreeNode * root = new TreeNode(pre[l]);
        
        int newIndex = l;
        while(newIndex <= r && pre[newIndex]<=pre[l])
            ++newIndex;        
        root->left = construct(pre,l+1,newIndex-1);
        root->right = construct(pre,newIndex,r);
        return root;
    }        
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return construct(preorder,0,preorder.size()-1);
    }
};