#include<bits/stdc++.h>
using namespace std;
struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
  ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
        return head;
        if(head->next == NULL)
        return head;
        ListNode *t=head;
        while(t!=NULL){
          if(t->next!=NULL){
          if(t->val==t->next->val){
            t->next = t->next->next;

          }else{
            t=t->next;
          }
        }else{
          t=t->next;
        }
        }
        return head;
    }
};
int main(){
  ListNode* h2 = new ListNode(1);
  h2->next = new ListNode(1);
  h2->next->next=new ListNode(1);
  // h2->next->next->next = new ListNode();
  Solution s;
  ListNode* mergedhead = s.deleteDuplicates(h2);
  while (mergedhead!=NULL) {
    /* code */
    cout<<mergedhead->val<<"-->";
    mergedhead=mergedhead->next;
  }
  std::cout << "NULL" << '\n';
}
