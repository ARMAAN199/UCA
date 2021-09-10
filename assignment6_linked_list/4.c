//simply copy all elements to an array and then traverse again to check if it palindrome.
//This is a 2n Solution.

bool isPalindrome(struct ListNode* head){
    struct ListNode* copy = head;
    int arr[100];
    int i=0;
    while(head!=NULL)
    {
        int arr[i] = copy->val;
        copy= copy->next;
        i++;
    }
    bool ispalindrome = 1;
    for(int j=i-1; j>0; j--)
    {
        if(head->val != arr[j])
        isPalindrome = 0;

        head=head->next;
    }

    return isPalindrome;
}

