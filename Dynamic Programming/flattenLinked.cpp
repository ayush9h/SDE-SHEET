Node* mergeTwoList(Node* a, Node* b)
{
     if (a == NULL)
        return b;
 
    // If second linked list is empty then first
    // is the result
    if (b == NULL)
        return a;
 
    // Compare the data members of the two linked
    // lists and put the larger one in the result
    Node* result;
 
    if (a->data < b->data) {
        result = a;
        result->child = mergeTwoList(a->child, b);
    }
 
    else {
        result = b;
        result->child = mergeTwoList(a, b->child);
    }
    result->next = NULL;
    return result;
}
Node* flattenLinkedList(Node* head) 
{
    //base case
	if (head == NULL || head->next == NULL)
        return head;
 
    // Recur for list on right
    head->next = flattenLinkedList(head->next);
 
    // Now merge
    head = mergeTwoList(head, head->next);
 
    // Return the root
    // it will be in turn merged with its left
    return head;
}
