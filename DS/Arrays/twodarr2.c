#include <stdio.h>
void main()
{
    int arr[3][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
        };

      int r,c;

      for(r=0;r < 3;r++)
    {
        for(c=0;c<5;c++)
        {
            printf("%3d ",arr[r][c]);
        }
        printf("\n");
    }
}
