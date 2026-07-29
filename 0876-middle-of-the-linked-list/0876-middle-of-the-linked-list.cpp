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
    ListNode* middleNode(ListNode* head) {
        int cnt=1;
        int n; //n no of transition
        ListNode *temp=head;
        ListNode *p=head;
        while(temp->next !=NULL){
            temp=temp->next;
            cnt++;
        }
        if(cnt%2==0){
            n=(cnt/2);
        }else{
            n=(cnt-1)/2;
        }

        for(int i=0;i<n;i++){
            p=p->next;
        }

        return p;
    }
};