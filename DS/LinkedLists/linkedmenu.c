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
node *createlist(node *start)
{
    node *current,*tmp,*end;
    int n,value;
    printf("Enter the number of node : ");
    scanf(" %d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the value : ");
        scanf(" %d",&value);

        current=createnode(current,value);

        if(start==NULL)
        {
            start=end=current;
        }
        else
        {
            end->next=current;
            end=current;
        }
    }

    return start;
}
void showlistnr(node *start)
{
    for(;start != NULL;start=start->next)
    {
        printf(" %d-->",start->data);
    }

    printf("\n");

}
void showlist(node *start)
{
    if(start == NULL)
    {
        return;
    }

    printf("%d -> ",start->data);
    showlist(start->next);
}

void main()
{
    int ch;
    node *start=NULL;
    do
    {
        printf("1. Create List\n");
        printf("2. Add at begin\n");
        printf("3. Add at end\n");
        printf("4. Add at middle\n");
        printf("5. Add at pos\n");
        printf("6. Update List\n");
        printf("7. Search List\n");
        printf("8. Delete List\n");
        printf("9. Traverse List\n");
        printf("0. Exit\n");
        printf("Enter your choice : ");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            start=createlist(
                             start);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            showlist(start);
            break;
        case 0:
            printf("Exiting....\n");
            break;
        default:
            printf("Invalid Choice\n");
        }
    }while(ch != 0);

}
