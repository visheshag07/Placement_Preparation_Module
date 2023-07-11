
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head,*fast=head;
        while(slow!=NULL and fast!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)fast=fast->next;
            if(slow==fast)break;
        }
        if(!slow or !fast)return NULL;
        slow=head;
        //If you move from head pointer and a pointer from the meeting point it will always meet, a+b=k(b+c)

        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};