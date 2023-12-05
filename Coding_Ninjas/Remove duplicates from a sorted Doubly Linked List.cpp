Node * removeDuplicates(Node *head)
{
    Node *temp = head;
    while(temp && temp->next){
        Node *newNode = temp->next;
        while(newNode && temp->data == newNode->data){
            Node *duplicate = newNode;
            newNode = newNode->next;
            free(duplicate);
        }
        temp->next = newNode;
        if(newNode) newNode->prev = temp;
        temp = temp->next;
    }
    return head;
}
