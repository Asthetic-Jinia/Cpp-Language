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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA=headA;
        ListNode *tempB=headB;
        ListNode *temp;
        int cntA=1;
        int cntB=1;
        if(tempA ==NULL || tempB==NULL){
            return NULL;
        }
        while(tempA->next!=NULL){
            tempA=tempA->next;
            cntA++;
        }
        while(tempB->next!=NULL){
            tempB=tempB->next;
            cntB++;
        }
        tempA = headA;
        tempB = headB;
        int diff;
        if(cntA<cntB){
            diff=cntB-cntA;
            int cnt=1;
            while(cnt<=diff){
                tempB=tempB->next;
                cnt++;
            }
        }else if(cntA>cntB){
            diff=cntA-cntB;
            int cnt=1;
            while(cnt<=diff){
                tempA=tempA->next;
                cnt++;
            }
        }
        while(tempA !=NULL && tempB !=NULL){
            if(tempA == tempB){
                
                return tempA;
            }
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return NULL;
    }
};