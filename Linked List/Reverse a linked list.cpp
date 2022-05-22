// This is just the function to reverse the linked lsit.

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *ptr= NULL, *temp;
        while(head!=NULL){
            temp = head->next;
            head->next = ptr;
            ptr = head;
            head = temp;
        }
        head = ptr;
    }
    
};
