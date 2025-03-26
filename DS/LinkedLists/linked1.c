#include <stdio.h>
typedef struct
{
    int data;
    struct node *next;
}node;
void main()
{
    node *start, *current, *tmp;
    start=current=NULL;
    int n;
    do
    {
        printf("Enter a no : ");
        scanf("%d",&n);
        if(n==-1)
            break;
        current=(node *)malloc(sizeof(node));  // Create the node
        current->data=n;    // populate data in the node
        current->next=NULL;
        if(start==NULL)         // add the node to the list
        {
            start=current;
        }
        else
        {
        for(tmp=start;tmp->next != NULL;tmp=tmp->next);
        tmp->next=current;
        }

    }while(n != -1);

    for(tmp=start;tmp != NULL;tmp=tmp->next)
        printf("%d->",tmp->data);
}





