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
    bool isPalindrome(ListNode* head) {
        vector<int>vec;
        ListNode* temp=head;
           while(temp!=NULL)
           {
               vec.push_back(temp->val);
               temp=temp->next;
                          }
            int n=vec.size();
            int low=0;
            int high=n-1;
            while(low<=high)
            {
                if(vec[low]!=vec[high])
                {
                    return false;
                }
                low++;
                high--;
            }
            return true;
     }
};