/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(n==0)
        return head;
    struct ListNode *p=head,*befp=head;

    while(n--){
        befp=befp->next;
    }
    if(befp==NULL){
        return head->next; 
    }
    while(befp->next!=NULL){
        p=p->next;
        befp=befp->next;
    }
    p->next=p->next->next;
    return head;

}
