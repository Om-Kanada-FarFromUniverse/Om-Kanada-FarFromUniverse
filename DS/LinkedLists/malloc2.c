#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    int size,i;
    printf("Enter the size :");
    scanf(" %d",&size);

    ptr=(int *)malloc(sizeof(int)*size);

    for(i=0;i<size;i++)
    {
        printf("Enter a number : ");
        scanf(" %d",&ptr[i]);

    }

    for(i=0;i<size;i++)
    {
        printf("%d",ptr[i]);
    }

}
