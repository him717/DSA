//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node *temp = head;
 while(temp->next!=NULL){
     if(temp->data==temp->next->data){
         temp->next = temp->next->next;
         continue;
         
     }
     temp = temp->next;
 }
 return head;
}
