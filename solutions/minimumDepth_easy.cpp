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
    int minDepth(TreeNode* root) {
          if(root==NULL)
            return 0;
          if(isLeaf(root))
            return 1;
          return min(minDepth(root->left),minDepth(root->right));

    }
    bool isLeaf(TreeNode* node){
      if(node->left==NULL&&node->right==NULL)
        return true;
      return false;
    }
};
