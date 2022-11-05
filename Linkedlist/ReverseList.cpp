class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = NULL;
        ListNode *temp1 = NULL;
        
        while(head!=NULL)
        {
            temp1=  head->next;
            head->next = temp;
            temp=head;
            head= temp1;
        }
        return temp;
    }
};
