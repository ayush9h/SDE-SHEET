
Node * uniqueSortedList(Node * head) {
     if (head == NULL || head->next == NULL) {
        return head;
    }
    
    Node* prev = head;
    Node* curr = head->next;
    
    while (curr != NULL) {
        // means duplicate node is present
        if (prev->data == curr->data) {
            Node* temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            temp->next = NULL;
        } else {
            prev = curr;
            curr = curr->next;   
        }
    }
    
    return head;
}
