Node *findMiddle(Node *head) {
    Node *slow = head;
    Node *fast = head;
    if(head->next==NULL || head==NULL) return head;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
        return slow;
}
