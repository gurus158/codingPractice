
#include<bits/stdc++.h>
using namespace std;
  // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  class Solution {
  public:
      bool isValidBST(TreeNode* root) {
          TreeNode* prev = NULL;
          return validate(root, prev);
      }
      bool validate(TreeNode* node, TreeNode* &prev) {
          if (node == NULL) return true;
          if (!validate(node->left, prev)) return false;
          if (prev != NULL && prev->val >= node->val) return false;
          prev = node;
          return validate(node->right, prev);
      }
  };
int main(){
  TreeNode* root= new TreeNode(10);

  // root->left = new TreeNode(5);
  // root->left->right = new TreeNode(12);
  // root->right = new TreeNode(15);
  // root->right->left = new TreeNode(11);
  // root->right->right = new TreeNode(20);
  Solution s;
  (s.isValidBST(root))?cout<<"YES\n":cout<<"NO\n";


}
//[10,5,15,null,null,6,20] = NO
//[10,5,15,null,null,10,20] = NO
//[10,5,15,null,7,11,20] = YES
