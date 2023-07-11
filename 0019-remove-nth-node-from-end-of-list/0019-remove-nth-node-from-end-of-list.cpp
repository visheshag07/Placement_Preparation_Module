/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int count=0;
        ListNode* temp=head;
        if(head->next==NULL)
        return NULL;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        //remove last node
        if(n==1)
        {
            ListNode* temp1=head;
            while(temp1->next->next !=NULL)
            {
                temp1=temp1->next;

            }
            temp1->next=NULL;
            return head;
        }
        // remove the head node
        if(count==n)
        {
            head=head->next;
            return head;

             }   
             // remove from beginning
             int cnt=0;
             ListNode* prev=NULL;
             ListNode* curr=head;
             while(cnt<count-n)
             {
              prev=curr;
              curr=curr->next;
              cnt++;
             }
             prev->next=curr->next;
             return head;
   }
};