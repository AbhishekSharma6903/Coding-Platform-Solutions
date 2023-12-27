
Node<int>* sortTwoLists(Node<int>* l1, Node<int>* l2)
{
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    Node<int>* res = NULL;
    Node<int>* curr = NULL;

    if(l1->data < l2->data){
        res = l1;
        curr = l1;
        l1=l1->next;
    }
    else{
        res = l2;
        curr = l2;
        l2=l2->next;
    }

    while(l1!=NULL && l2!=NULL ){
       if (l1->data < l2->data){

        curr->next = l1;
        curr = l1;
        l1 = l1->next;
       }
       else{
               curr->next = l2;
        curr = l2;
        l2 = l2->next; 
       }
    }

    if(l1!=NULL){
        curr->next = l1;
    }
    else{
        curr->next = l2;
    }

    return res;
}
