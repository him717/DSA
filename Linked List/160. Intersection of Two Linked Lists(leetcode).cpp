class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        ListNode *l1=headA, *l2=headB;
        while(l1!=NULL && l2!=NULL && l1 != l2){
            l1=l1->next;
            l2=l2->next;
            if(l1 == l2){
                return l1;

            }
            if(l1 == NULL){
                l1=headB;
    
            }
            if(l2 == NULL){
                l2=headA;
                
            }
        }
        return l1;
        
    }
};
