#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int rno;
    char name[21];
}data;
void main()
{
    data *ptr;
    printf("The size of the structure is : %d\n",sizeof(data));

    ptr=(data *)malloc(sizeof(data));

    printf("Enter the rollno : ");
    scanf("%d",&ptr->rno);
    printf("Enter the name : ");
    scanf("%s",ptr->name);

    printf("Rno  : %d\n",ptr->rno);
    printf("Name : %s\n",ptr->name);
}
