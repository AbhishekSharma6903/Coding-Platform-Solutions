Node *deleteLast(Node *list){
    if(list==NULL || list->next==NULL){
        delete  list;
        return NULL;
    }
    Node *head = list;
    Node *temp = head;
    Node *temp2 = head->next;

    while(temp2->next!=NULL){
        temp=temp->next;
        temp2=temp2->next;
    }
    delete temp2;
    temp->next=NULL;
    return head;
}
