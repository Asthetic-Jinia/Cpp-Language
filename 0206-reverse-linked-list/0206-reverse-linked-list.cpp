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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp1=head;
        ListNode *temp2=head;
        ListNode *temp3=NULL;
        while(temp1!=nullptr){
            temp1=temp1->next;
            temp2->next=temp3;
            temp3=temp2;
            temp2=temp1;


        }
        head=temp3;
        return head;
    }
};