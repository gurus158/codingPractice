#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 */ struct ListNode {
        int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
   };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* nthNode=head;
        ListNode* currentNode=head;
        ListNode* prev=head;
        for (int i = 0; i < n; i++)
        {
            nthNode = nthNode->next;
        }
        if(nthNode==nullptr) return currentNode->next;

        while(nthNode!=nullptr){
            nthNode=nthNode->next;
            prev=currentNode;
            currentNode = currentNode->next;

        }      
        prev->next = currentNode->next; 
        return head;
    }
};









