class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res=0;
        while(head){
            res*=2;
            res+=head->val;
            head=head->next;
        }
        return res;
        
    }
};
