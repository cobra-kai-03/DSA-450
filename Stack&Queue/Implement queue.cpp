void MyQueue :: push(int x)
{
        // Your Code
        //rear++;
        arr[rear++]=x;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code 
        if(front== rear){
    return -1;}
        int k=arr[front++];
        //front++;
        return k;
}
