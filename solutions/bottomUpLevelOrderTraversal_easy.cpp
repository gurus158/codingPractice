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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
      vector<vector<int>> out;
      vector<int> curLevel;
      vector<TreeNode*> curLevelNodes;
      vector<vector<TreeNode*>> final;
      if(root == NULL)
        return out;
      int d = depth(root);
      curLevel.push_back(root->val);
      out.push_back(curLevel);
      curLevelNodes.push_back(root);
      final.push_back(curLevelNodes);
      int level=1;
      for(int i=0;i<final.size() && (level<d);i++){
        curLevel.clear();
        curLevelNodes.clear();
        for(int j=0;j<final[i].size();j++){
            if(final[i][j]->left!=NULL){
          curLevelNodes.push_back(final[i][j]->left);
          curLevel.push_back(final[i][j]->left->val);
            }
            if(final[i][j]->right!=NULL){
            curLevelNodes.push_back(final[i][j]->right);
            curLevel.push_back(final[i][j]->right->val);
            }
        }

        final.push_back(curLevelNodes);
        out.push_back(curLevel);
        level++;
      }
      reverse(out.begin(),out.end());
      return out;

    }
    int depth(TreeNode *root) {
    if (!root) return 0;
    return max(depth(root->left),depth(root->right))+1;
}
};
