#include <stdio.h>
void main()
{
    char names[12][21];
    int i;
    for(i=0;i<12;i++)
    {
        printf("Enter name %d : ",i+1);
        scanf(" %[^\n ]",names[i]);
    }

    for(i=0;i<12;i++)
    {
        printf("[%2d] %s\n",i+1,names[i]);
    }
}
