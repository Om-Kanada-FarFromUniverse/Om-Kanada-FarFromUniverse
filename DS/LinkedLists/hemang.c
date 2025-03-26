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

node *insertionBegin(node *start,int value)
{

        node *tmp  = createnode(tmp,value);
        if(start == NULL)
            return tmp;

        tmp->next  = start;
        start      = tmp;
        return start;
}

node *insertionEnd(node *start,int value)
{
        node *tvs = start;
        if(start == NULL)
            start=createlist(start);
        else
        {
            while(tvs->next)
            {
                tvs = tvs->next;
            }
            node* tmp = createnode(tmp,value);
            tvs->next=tmp;
        }
        return start;
}
node *insertanywhere(node *start, int svalue,int value)
{
    node *tmp;

    node *curr;
    for(tmp=start;(tmp);tmp=tmp->next)
    {

        if(tmp->data == svalue)
            break;
    }
    curr=createnode(curr,value);
    curr->next=tmp->next;
    tmp->next=curr;
    return start;
}

node *insertatposition(node *start, int pos, int value)
{
    node *tmp;
    node *curr;
    int len,i;
    for(tmp=start;tmp;tmp=tmp->next)
        len++;
    if(pos<1)
    {
        pos=1;
    }
    else if(pos > len)
        pos=len;
    curr=createnode(curr, value);
    if(pos == 1)
    {
        curr->next=start;
        start=curr;
        return start;
    }

    for(tmp=start,i=1;(tmp);tmp=tmp->next,i++)
    {
        if(i==pos)
            break;
    }
    curr->next=tmp->next;
    tmp->next=curr;

    return start;


}

node *deletenode(node *start, int value)
{
    node *tmp;
    node *prev;
    for(tmp=start;(tmp) && tmp->data != value ;tmp=tmp->next)
    {
        prev=tmp;
    }
    if(tmp==start)
    {
        start=tmp->next;
        free(tmp);

    }
    else
    {
        prev->next=tmp->next;
        free(tmp);
    }
    return start;


}
void main()
{
    int ch;
    int val,sval,pos;
    node *start=NULL;
    do
    {
        printf("\n1. Create List\n");
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
            start=createlist(start);
            break;
        case 2:
            printf("Enter a value to be entered :");
            scanf("%d",&val);
            start=insertionBegin(start,val);
            break;
        case 3:
            printf("Enter a value to be entered: ");
            scanf("%d",&val);
            start = insertionEnd(start,val);
            break;
        case 4:
            printf("Enter the value to insert at : ");
            scanf(" %d",&sval);
            printf("Enter the value to insert : ");
            scanf(" %d",&val);
            start=insertanywhere(start, sval, val);
            break;
        case 5:
            printf("Enter the position to insert at : ");
            scanf(" %d",&pos);
            printf("Enter the value to insert : ");
            scanf(" %d",&val);
            start=insertatposition(start, pos, val);
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            printf("Enter the value to delete : ");
            scanf(" %d",&val);
            start=deletenode(start, val);
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

