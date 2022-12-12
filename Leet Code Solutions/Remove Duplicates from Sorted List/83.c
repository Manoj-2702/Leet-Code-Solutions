/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==NULL){
        return head;
    }
    struct ListNode *p = head->next;
    struct ListNode *befp = head;
    while(p){
        if(befp->val == p->val){
            p=p->next;
            befp->next=p;
        }
        else{
            befp=p;
            p=p->next;
        }
    }
    return head;
}
