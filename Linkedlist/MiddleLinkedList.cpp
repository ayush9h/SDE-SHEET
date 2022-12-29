#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    //Use the tortoise Hare Approach use two pointer slow and fast
    
    //base case
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    Node*slow = head;
    Node *fast = head;
    
    while(fast!=NULL and fast->next!=NULL)
    {
        slow = slow->next;//move slow by one step
        fast = fast->next->next;//move fast by 2 step
    }
    return slow;
}
