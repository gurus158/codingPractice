#include<bits/stdc++.h>
using namespace std;
struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode *f;
       ListNode *s;
       f=s=head;
       bool l=false;
       while(s!=NULL && f!=NULL && f->next!=NULL){
         s=s->next;
         f=f->next->next;
         if(s==f){
           l=true;
           break;
         }
       }
       if(l){
         s=head;
         while(f!=s){
           f=f->next;
           s=s->next;
         }
         return f;
       }
       else return NULL;
    }
};

int main(){
  ListNode* h1=new ListNode(1);
  h1->next = new ListNode(2);
  h1->next->next = new ListNode(3);
  h1->next->next->next = new ListNode(4);
  h1->next->next->next = h1->next;
  Solution s;
  ListNode* a=s.detectCycle(h1);
  cout<<(a->val);

}
