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
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        int cnt=1;
        ListNode *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt++;
        }
        ListNode *curr=head;
        ListNode *prev=head;
        if(cnt-n <1){
            head=head->next;
            return head;
        }else{
            for(int i=0;i<cnt-n-1;i++){
                prev=prev->next;
            } 
            curr=prev->next;
            prev->next=curr->next;
            curr->next=NULL;
        }
        
        return head;
    }
};