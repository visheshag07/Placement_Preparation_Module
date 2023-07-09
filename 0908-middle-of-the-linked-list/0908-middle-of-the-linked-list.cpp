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
 int getlen(ListNode* head)
 {
     ListNode* temp=head;
     int cnt=0;
     while(temp!=NULL)
     {
     cnt++;
     temp=temp->next;
     }
     return cnt;
     
 }
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len=getlen(head);
        int ans=len/2;
        int count=0;
        ListNode* temp=head;
        while(count<ans)
        {
           //temp=temp->next;
           count++;
           temp=temp->next;
        }
        return temp;
    }
};