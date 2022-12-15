/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lenA=0,lenB=0;
    struct ListNode *first=headA,*second=headB;
    while(first != NULL){
        lenA++;
        first=first->next;
    }
    while(second != NULL){
        lenB++;
        second=second->next;
    }
    int diff=lenA-lenB;
    first=headA;
    second=headB;

    if(diff > 0){
        while(diff--){
            first=first->next;
        }
    }
    else{
        while(diff++){
            second=second->next;
        }
    }
    while(first != NULL && second != NULL){
        if(first==second){
            return first;
        }
        first=first->next;
        second=second->next;
    }
    return NULL;
}
