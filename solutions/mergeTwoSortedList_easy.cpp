#include<bits/stdc++.h>
using namespace std;
struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
  ListNode*  mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(!l1)
    return l2;
    if(!l2)
    return l1;
    if(l1->val < l2->val){
      l1->next = mergeTwoLists(l1->next,l2);
      return l1;
    }else{
      l2->next = mergeTwoLists(l1,l2->next);
      return l2;
    }
  }
};
int main(){
  ListNode* h1=new ListNode(1);
  h1->next = new ListNode(2);
  ListNode* h2 = new ListNode(1);
  h2->next = new ListNode(3);
  h2->next->next=new ListNode(4);
  Solution s;
  ListNode* mergedhead = s.mergeTwoLists(h1,h2);
  while (mergedhead!=NULL) {
    /* code */
    cout<<mergedhead->val<<"-->";
    mergedhead=mergedhead->next;
  }
  std::cout << "NULL" << '\n';
}
