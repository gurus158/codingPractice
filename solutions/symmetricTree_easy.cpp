#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution{
public:
  bool isSymmetric(TreeNode* root) {
    return checkMirror(root,root);
   }
   bool checkMirror(TreeNode* r1,TreeNode* r2){
     if(r1==NULL && r2==NULL)
      return true;
      if(r1&&r2&&r1->val==r2->val)
        return checkMirror(r1->left,r2->right) && checkMirror(r1->right,r2->left);
      return false;
   }
};
