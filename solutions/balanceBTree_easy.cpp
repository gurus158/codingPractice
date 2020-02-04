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
    bool isBalanced(TreeNode* root) {
      int h;
      int bal=true;
      h=isBalanced(root,bal);
      return bal;
    }
    int isBalanced(TreeNode *root,bool &bal) {
      if(!bal)
        return 0;
      if(root==NULL)
        return 0;
      int hl=isBalanced(root->left,bal);
      int hr=isBalanced(root->right,bal);
      int h=max(hl,hr)+1;
      if(abs(hl-hr)>1)
        bal=false;
      return h;
    }
};
