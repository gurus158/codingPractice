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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int cur=0;
        if(preorder.size()<1)
        return NULL;
        return utility(preorder,inorder,0,preorder.size()-1,cur);

    }
    TreeNode* utility(vector<int>& preorder, vector<int>& inorder,int start,int end,int &cur) {
      TreeNode* nnode=new TreeNode(preorder[cur]);
      int k=start;
      while(inorder[k]!=preorder[cur]) k++;
      cur++;
      if(k>start){
        nnode->left = utility(preorder,inorder,start,k-1,cur);
      }

      if(k<end){
        nnode->right = utility(preorder,inorder,k+1,end,cur);
      }
      return nnode;
    }
    void inorderTravel(TreeNode* root){
      if(root==NULL)
      return;
      inorderTravel(root->left);
      cout<<root->val<<" ";
      inorderTravel(root->right);
    }

};
int main(){
  Solution s;
  vector<int> pre={3,9,20,15,7};
  vector<int> in = {9,3,15,20,7};
  s.inorderTravel(s.buildTree(pre,in));
}


/*
searchQuery = "(ON {0})".format( time.strftime("%d-%b-%Y"))
searchQuery = getPreviousDateSearchQ(searchQuery.replace('(', '').replace(')', ''))

def getPreviousDateSearchQ(currentDateSearchQuery):
    cD=currentDateSearchQuery.split(' ')[1].split('-')
    day=int(cD[0])
    month=int(monthMap[cD[1]])
    year=int(cD[2])
    toady=date(year,month,day)
    priviousDay=toady-timedelta(days=1)

    #month = int(monthMap[])
    #print(str(priviousDay))
    o="ON "+str(priviousDay.day)+"-"+list(monthMap.keys())[priviousDay.month-1]+'-'+str(priviousDay.year)
    #print(o)
    return o

*/
