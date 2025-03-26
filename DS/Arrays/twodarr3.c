#include<stdio.h>
void main()
{
    int arr[4][4];
    int mx[4];
    int i, j,max;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter a number : ");
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        max=arr[i][0];
        for(j=1;j<4;j++)
        {
            if(arr[i][j] > max)
                max=arr[i][j];
        }
        mx[i]=max;
    }

    for(i=0;i<4;i++)
        printf("%d\t",mx[i]);

    printf("\n");

}
