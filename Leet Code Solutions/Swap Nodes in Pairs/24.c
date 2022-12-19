/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// Runtime = 0ms

struct ListNode* swapPairs(struct ListNode* head){
    if(head==NULL || head->next==NULL) return head;
    struct ListNode *p = head;
    struct ListNode *q = head->next;
    struct ListNode *dummy=q;
    struct ListNode *t=NULL;
    while(p && q){
        t=q->next;
        q->next=p;
        if(t && t->next){
            p->next=t->next;
        }
        else
        {
            p->next=t;
            break;
        }
        p=t;
        q=p->next;
    }
    return dummy;
}

//Runtime = 2ms

struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode h;
    struct ListNode *tail=&h;
    while(head && head->next){
        struct ListNode *p=head;
        struct ListNode *q=head->next;
        head=q->next;
        q->next=p;
        tail->next=q;
        tail=p;
    }
    tail->next=head;
    return h.next;
}
