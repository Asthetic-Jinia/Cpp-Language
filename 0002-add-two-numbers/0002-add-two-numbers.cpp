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
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *temp1=head;
//         ListNode *temp2=head;
//         ListNode *temp3=NULL;
//         while(temp1!=nullptr){
//             temp1=temp1->next;
//             temp2->next=temp3;
//             temp3=temp2;
//             temp2=temp1;


//         }
//         head=temp3;
//         return head;
//     }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode *new_l1=reverseList(l1);
//         ListNode *new_l2=reverseList(l2);

//         ListNode *temp1=new_l1;
//         ListNode *temp2=new_l2;
//         int quotient=0;
//         if(l1==NULL || l2==NULL || l1->next==NULL|| l2->next==NULL){
//             return
//         }
//         while(temp1->next!=l1 && temp2->next!=l2){
            
//             temp1->val=(temp1->val+temp2->val+quotient) % 10;
//             quotient=(temp1->val+temp2->val)/10;
//             temp1=temp1->next;
//             temp2=temp2->next;
//         }
//         return new_l1;
//     }
// };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return dummy->next;
    }
};
