#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    char *chr;

    ptr=(int *)malloc(sizeof(int));

    printf("Enter a number : ");
    scanf(" %d",ptr);
    printf("The value entered is %d\n",*ptr);


    chr=(char *)malloc(sizeof(char));
    printf("Enter a number : ");
    scanf(" %c",chr);
    printf("The value entered is %c\n",*chr);
}
