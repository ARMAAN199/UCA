bool recur(struct ListNode **start, struct ListNode *end){
    if(end == NULL)
        return true;
    
    bool isEqual;
    int num = end -> val;
    
    isEqual = recur(start, end -> next);
    
    if(isEqual == false)
        return false;
    if((*start) -> val == num){
        *start = (*start) -> next;
        return true;
    }else{
        return false;
    }
}
bool isPalindrome(struct ListNode* head){
    return recur(&head, head);
}

