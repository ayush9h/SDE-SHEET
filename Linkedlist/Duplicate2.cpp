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

Node *firstNode(Node *head)
{
	if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    
    while(fast!=NULL && fast->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow==fast)
            break;//if duplicate is found
    }
    if(slow!=fast)//if not found
    {
        return NULL;
    }
    
    
    Node *ptr1=head;Node*ptr2=slow;
    while(ptr1!=ptr2)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return ptr1;
    
   
}
