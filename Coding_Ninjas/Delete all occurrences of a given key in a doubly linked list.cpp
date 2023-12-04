Node* deleteAllOccurrences(Node* head, int k) {
    if (head == NULL) {  // Modified: Checking for empty list
        return head;
    }

    while (head != NULL && head->data == k) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {  // Modified: Updating the previous pointer for the new head
            head->prev = NULL;
        }
        delete temp;
    }

    Node* curr = head;

    while (curr != NULL) {
        if (curr->data == k) {
            if (curr->next != NULL) {
                curr->next->prev = curr->prev;
            }
            if (curr->prev != NULL) {
                curr->prev->next = curr->next;
            }
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }

    return head;
}
