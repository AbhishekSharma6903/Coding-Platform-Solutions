void MyQueue :: push(int x)
{
       rear ++;
       arr[rear]=x;
       return;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        if(front==rear) return -1;
        else {
            front++;
            return arr[front];
        }
}
