class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        Node *ptr=head;
        Node *temp=ptr;
        while(ptr->next!=NULL){
            
                // temp = ptr->next;
            if(ptr->data < ptr->next->data){
                temp = ptr;
                
                temp->data = temp->next->data;
                temp->next = temp->next->next;
                ptr=head;
                
            }
            else
                ptr=ptr->next;
                 
        
        }
        return head;
    }
    
};
