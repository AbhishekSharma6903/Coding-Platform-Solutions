Node *mergeLL(Node *a, Node *b) {
    Node *temp = new Node(-1);
    Node *hero = temp;

    while (a!=NULL && b!=NULL) {
        if (a->data < b->data) {
            temp->child = a;
            temp = a;
            a = a->child; // Move to the next node in the original hierarchy
        } else {
            temp->child = b;
            temp = b;
            b = b->child; // Move to the next node in the original hierarchy
        }
    }
    while(a != NULL){
        temp-> child = a;
        temp = a;
        a = a-> child;  
    }
    while(b != NULL){
        temp-> child = b;
        temp = b;
        b = b-> child;    

    }

    Node *result = hero->child;
    delete hero; // Free the memory allocated for the temporary node
    return result;
}

Node* flattenLinkedList(Node* root) {
    if (!root || !root->next) {
        return root;
    }
    Node *down = root;
	Node *right =flattenLinkedList(root->next);
	down->next=NULL;
	Node *ans = mergeLL(down,right);
	return ans;
}

