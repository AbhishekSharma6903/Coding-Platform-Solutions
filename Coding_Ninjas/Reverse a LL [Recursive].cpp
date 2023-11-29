Node* reverseLinkedList(Node *head)
{
    if(head==NULL || head->next==NULL) return head;
    Node *newNode = reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
    return newNode;
}
