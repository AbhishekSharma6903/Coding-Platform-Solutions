void MyStack ::push(int x) 
{
    if(top==NULL){
        StackNode*newnode=new StackNode(x);
        top=newnode;
    }
    else {
        StackNode*newnode=new StackNode(x);
        newnode->next = top;
        top = newnode;
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop() {
    if(top==NULL) return -1;
    else{
        int a = top->data;
        StackNode*todelete=top;
        top = top->next;
        delete todelete;
        return a;
    }
}
