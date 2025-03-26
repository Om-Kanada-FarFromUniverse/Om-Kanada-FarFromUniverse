#include <stdio.h>
#define size 10
typedef struct
{
    int data[size];
    int start;
    int end;
}queue;
void enqueue(queue *que,int value)
{

        if(que->start==-1 && que->end==-1)
        {
          que->start=que->end=0;
          que->data[que->end]=value;
        }
        else
        {
            if(que->end <size-1)
            {
            que->end++;
            que->data[que->end]=value;
            }
        }
}
int dequeue(queue *que)
{
    int tmp=-1;
    if(que->start>que->end)
    {
        printf("The que is empty\n");
        que->start=que->end=-1;
    }
    else if(que->start == -1 && que->end == -1)

        printf("The que is empty\n");
    else{
    tmp=que->data[que->start];
    que->start++;
    if(que->start>que->end)
        que->start=que->end=-1;

    }
    return tmp;
}

void show(queue que)
{
    int i;
    if(que.start == -1 && que.end ==-1){
        printf("The que is empty\n");
        return;
        }
    for(i=que.start;i<=que.end;i++)
    {
        printf("%d->",que.data[i]);
    }

    printf("\n\n\n\n");
}
void main()
{
    int ch;
    int value;
    queue que;
    que.start=que.end=-1;
    do
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Show Queue\n");
        printf("0. Exit\n");
        printf("Enter your choice : ");
        scanf(" %d",&ch);

        switch(ch)
        {
        case 1:
            printf("Enter the value to add : ");
            scanf(" %d",&value);

            enqueue(&que,value);
            break;
        case 2:
            value=dequeue(&que);
            break;
        case 3:
            show(que);
            break;
        case 0:
            printf("Exiting.....\n");
            break;
        default:
            printf("Invalid choice\n");
            break;

        }

    }while(ch != 0);
}
