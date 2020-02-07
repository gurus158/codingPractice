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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector<vector<int>> out;
              if(root==NULL){
                return out;
              }
              int level=1;
              queue<TreeNode*> cl;  //currentLayer
              queue<TreeNode*> nl; //nextLayer
              cl.push(root);
              vector<int> nodes;

              while(!cl.empty())
                {
                  nodes.push_back(cl.front()->val); //saving currentLayer nodes

                  //creating next layer using currentLayer node
                  if(cl.front()->left!=NULL)
                  nl.push(cl.front()->left);
                  if(cl.front()->right!=NULL)
                  nl.push(cl.front()->right);
                  //------------------------------

                  cl.pop();  // pop one element from currentLayer

                  //if currentLayer empty
                  if(cl.empty()){
                    if(level%2==0)
                      reverse(nodes.begin(),nodes.end());
                    out.push_back(nodes);      // put nodes in result as all nodes of currentLayer are processed
                    nodes.clear();     // clear nodes to use for next layer
                    cl=nl;  // make currentLayer equal nextLayer

                    //empty nextLayer
                    while(!nl.empty())
                      nl.pop();
                    level++;
                  }

                }

              return out;

    }
};

int main(){
  TreeNode* root= new TreeNode(3);
  vector<vector<int>> res;
  root->left = new TreeNode(9);
  // root->left->right = new TreeNode(12);
  root->right = new TreeNode(20);
  root->right->left = new TreeNode(15);
  root->right->right = new TreeNode(7);
  Solution s;
  res=s.zigzagLevelOrder(root);

  for(int i =0;i< res.size();i++){
    for(int j=0;j<res[i].size();j++)
    cout<<res[i][j]<<" ";
    cout<<"\n";
  }

}
