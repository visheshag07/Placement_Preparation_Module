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
   // private:
    ListNode* reverselink(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=head;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    void insertattail(ListNode* &head, ListNode* &tail,int digit)
    {
        ListNode* temp=new ListNode(digit);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            return;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
     ListNode* addtwo(ListNode* first, ListNode* second){
       ListNode* headpoint=NULL;
       ListNode* tailpoint=NULL;
       int carry=0;
       while(first!=NULL||second!=NULL||carry!=0)
       {
           int val1=0;
           if(first!=NULL)
           {
            val1=first->val;
           }
           int val2=0;
           if(second!=NULL)
           {
                val2=second->val;
           }
           int sum=val1+val2+carry;
           int digit=sum%10;
           insertattail(headpoint,tailpoint,digit);
           carry=sum/10;
           if(first!=NULL)
           first=first->next;
           if(second!=NULL)
           second=second->next;
       }
       return headpoint;
     }
public:
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        first=reverselink(first);
        second=reverselink(second);
        ListNode* ans= addtwo(first,second);
         ans=reverselink(ans);
        return ans;


    }
};