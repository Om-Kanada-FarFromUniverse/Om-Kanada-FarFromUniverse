#include <stdio.h>
#define size 10
typedef struct
{
    int data[size];
    int top;

}stack;
void push(stack *s,int value)
{
    if(s->top < size -1)
    {
    s->top++;
    s->data[s->top]=value;
    }
    else
        printf("The stack is full\n");

}
int pop(stack *s)
{
    int t;
    if(s->top >= 0)
    {
    t=s->data[s->top];
    s->top--;
    return t;
    }
    else
        return -1;


}
void peek(stack *s)
{
    if(s->top == -1)
        printf("The stack is empty\n");
    else
    printf("\n\nThe element at the top is %d\n",s->data[s->top]);
}

void show(stack s)
{
    if(s.top == -1){
        printf("The stack is empty\n");
        return;
    }
    int i;
    for(i=0;i<=s.top;i++)
    {
        printf("%d-->",s.data[i]);
    }
    printf("\n");
}


void main()
{
    stack stk;
    stk.top=-1;
    int ch, value;

    do
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Show\n");
        printf("0.Exit\n");
        printf("Enter your choice : ");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the value ");
            scanf(" %d",&value);
            push(&stk,value);
            break;
        case 2:
            value=pop(&stk);
            printf("The value popped is %d\n",value);
            break;
        case 3:
            peek(&stk);
            break;
        case 4:
            show(stk);
            break;
        case 0:
            printf("Exiting....");
            break;
        default:
            printf("Invalid choice\n");
        }
    }while(ch != 0);
}
