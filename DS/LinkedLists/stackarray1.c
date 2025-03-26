#include <stdio.h>
#define size 10
int stack[size];
int top=-1;
void push(int value)
{
    if(top<size-1)
    {
        top++;
        stack[top]=value;
    }
    else
        printf("The stack is full\n");

}
int pop()
{
    if(top==-1)
    {
        printf("The stack is empty\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }

}
int peek()
{

    return  stack[top];
}
void show()
{
    int i;
    for(i=0;i<=top;i++)
        printf("%d->",stack[i]);
}
void main()
{
    int ch;
    int value;
    do
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Show\n");
        printf("0. Exit\n");
        printf("Enter your choice : ");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the value : ");
            scanf(" %d",&value);
            push(value);
            break;
        case 2:
            value=pop();
            printf("%d is popped top=%d\n",value,top);
            break;
        case 3:
            value=peek();
            printf("The value at the top is %d\n",value);
            break;
        case 4:
            show();
            break;
        case 0:
            printf("Exiting ...\n");
            break;
        }
    }while(ch != 0);
}
