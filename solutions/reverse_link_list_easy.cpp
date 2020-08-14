#include<bits/stdc++.h>
using namespace std;
struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* c=head;
      ListNode *p=NULL,*n=NULL;
      while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
      }
      return p;
    }

};
int main(){
  ListNode* h2= new ListNode(2);
  h2->next = new ListNode(3);
  h2->next->next=new ListNode(4);
  Solution s;
  ListNode* h=s.reverseList(h2);
  while (h!=NULL) {
    /* code */
    cout<<h->val<<"-->";
    h=h->next;
  }
}
