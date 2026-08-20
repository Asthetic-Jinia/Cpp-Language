/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        
        if(head==NULL || head->next==NULL){
            return 0;
        }
        while(fast != NULL && fast->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                return slow;
            }
        }
        return 0;
    }

    ListNode *detectCycle(ListNode *head) {
        ListNode *flag=hasCycle(head);
        if(flag==0){
            return NULL;
        }else{
            
            ListNode *s=head;
            
            while(s!=flag){
                s=s->next;
                flag=flag->next;
            }
            return flag;
        }

        
        return NULL;
    }
};