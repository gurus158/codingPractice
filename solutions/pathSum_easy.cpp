#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
          return false;
        if(isLeaf(root)&&sum-root->val!=0)
          return false;
        if(isLeaf(root)&&sum-root->val==0)
          return true;
        sum=sum-root->val;
        return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);
    }
    bool isLeaf(TreeNode* node){
      if(node->left==NULL&&node->right==NULL)
        return true;
      return false;
    }
};
