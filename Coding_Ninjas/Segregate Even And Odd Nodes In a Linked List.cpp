Node* segregateEvenOdd(Node* head)

{
    Node* even = NULL;
    Node* odd = NULL;

    Node* tempe=NULL;
    Node* tempo  =NULL;

    Node* temp=head;

    while(temp){
        Node* add = new Node(temp->data);

        if(temp->data%2==0){
            if(even==NULL){
                even = add;
                tempe = add;

            } 
           else {
                tempe->next = add;
                tempe = add;
            }
        }

        else {
            if(odd==NULL){
                odd = add;
                tempo = add;

            } else {
                tempo->next = add;
                tempo = tempo->next;
           }
        }
        temp=temp->next;
    }

    if(even){
        Node* head = even;
        while(even->next!=NULL){
            even = even->next;
        }
        even->next=odd;
        return head;
    }
    return odd;

}
