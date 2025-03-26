#include <stdio.h>
void main()
{
    int arr[4][5];
    int r, c;

    for(r=0;r < 4;r++)
    {
        for(c=0;c<5;c++)
        {
            printf("Enter a number at [%d %d] : ",r, c);
            scanf("%d",&arr[r][c]);
        }

    }
    for(r=0;r < 4;r++)
    {
        for(c=0;c<5;c++)
        {
            printf("%3d ",arr[r][c]);
        }
        printf("\n");
    }



}
