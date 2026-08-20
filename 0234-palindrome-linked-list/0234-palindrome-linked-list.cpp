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

        //Find the mid
        ListNode *slow=head;
        ListNode *fast=head;
        if(head==NULL && head->next==NULL){
            return true;
        }
        while(fast !=NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        // mid of LL= slow

        // reverse the last half LL
        ListNode *t1=slow;
        ListNode *t2=slow;
        ListNode *t3=NULL;
        while(t1!=NULL){
            t1=t1->next;
            t2->next=t3;
            t3=t2;
            t2=t1;
        }
        ListNode *newhead=t3;

        // check palindrome
        ListNode *temp1=head;
        ListNode *temp2=newhead;
        while(temp2!=NULL){
            if(temp1->val ==temp2->val){
                temp1=temp1->next;
                temp2=temp2->next;
            }else{
                return false;
            }
        }
        return true;
    }
};