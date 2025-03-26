#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    struct node *next;
}node;
node *createnode(node *curr,int value)
{

    curr=(node *)malloc(sizeof(node));
    curr->data=value;
    curr->next=NULL;
    return curr;
}

node *push(node *stack,int value)
{
    node *curr;
    curr=createnode(curr, value);
    if(stack == NULL)
    {
        stack=curr;
    }
    else
    {
            curr->next=stack;
            stack=curr;

    }
    return stack;
}

node *pop(node *s)
{
    if(s != NULL)
    {
      node *tmp=s;
      printf("The value popped is %d\n",s->data);
      s=s->next;
      free(tmp);
      return s;
    }
    else
        return NULL;

}
void peek(node *s)
{
    if(s != NULL)
    printf("%d is at at the top\n\n\n ",s->data);
    else
    printf("The stack is empty\n\n\n");
}

void show(node *s)
{
    node *tmp=s;
    while(tmp)
    {
        printf("%d, ",tmp->data);
        tmp=tmp->next;
    }
}

void main()
{
    int ch, value;
    node *stack=NULL;
    do
    {
        printf("\n\n1.Push\n");
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
            stack=push(stack,value);

            break;
        case 2:
            stack=pop(stack);

            break;
        case 3:
            peek(stack);
            break;
        case 4:
            show(stack);
            break;
        case 0:
            printf("Exiting....");
            break;
        default:
            printf("Invalid choice\n");
        }

    }while(ch != 0);
}
