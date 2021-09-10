//Incomplete but approach is same.

struct ListNode* deleteDuplicates(struct ListNode* head){
    // struct ListNode* temp = head;
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;
    while(curr != NULL)
    {
       if(curr->next!=NULL && curr->val == curr->next->val)
       {
           int flag = curr->val;
           while(curr->val == flag && curr->next!= NULL)
           {
               curr = curr->next;
           }
       }
           prev->next = curr;
    }
    
    return prev;
}