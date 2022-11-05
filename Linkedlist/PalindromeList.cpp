class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode *temp= NULL;
        ListNode *temp1 = NULL;
        
        while(head!=NULL)
        {
            temp1 = head->next;
            head->next= temp;
            temp = head;
            head = temp1;
        }
        return temp;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
        //find middle of linkedlist  
        ListNode* fast = head;
        ListNode* slow =head;
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        
        //reverse the right half
        slow->next = reverseList(slow->next);
        slow = slow->next;
        
        //Traverse the linkedlist from right half and starting
        while(slow!=NULL)
        {
            if(head->val != slow->val)
            return false;
            head = head ->next;
            slow = slow->next;
        }
        return true;
    }
};
