#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
  class Solution {
  public:
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans;
          ListNode* head;
        if(!l1 && !l2)
          return ans;
        if(!l1)
          return l2;
        if(!l2)
          return l1;
        int s=0,c=0;
        int a = (l1)?l1->val:0;
        int b = (l2)?l2->val:0;
        s=a+b+c;
        c=s/10;
        s=s%10;
        ans->val=s;
        l2=l2->next;
        l1=l1->next;
        head=ans;
        while(l2||l1||c){
          int a = (l1)?l1->val:0;
          int b = (l2)?l2->val:0;
          s=a+b+c;
          c=s/10;
          s=s%10;
          ListNode* temp = new ListNode(s);
          ans->next=temp;
          ans=ans->next;
            if(l1)
           l1=l1->next;
            if(l2)
           l2=l2->next;
        }
        return head;
      }
  };
