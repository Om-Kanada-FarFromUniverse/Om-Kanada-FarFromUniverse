#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char a;
    struct node *next;

}node;
void main()
{
    node *start, *current, *tmp;
    start=current=tmp=NULL;
    char ch;
    do
    {
        printf("Enter a character :  ");
        scanf(" %c",&ch);
        if(ch == '.')
            break;
        current=(node *)malloc(sizeof(node));
        current->a=ch;
        current->next=NULL;
        if(start==NULL)
        {
            start=current;
        }
        else
        {
            current->next=start;
            start=current;
        }
    }while(ch != '.');

     for(tmp=start;tmp != NULL;tmp=tmp->next)
        printf("%c->",tmp->a);
}
