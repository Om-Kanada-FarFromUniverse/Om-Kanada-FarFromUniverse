#include <stdio.h>
#define sz 20
void appendarr1(int *arr,int size,int *pos)
{
    int n;
    int ch;
        do
        {
        printf("Enter the number to add : ");
        scanf(" %d",&n);

        if(*pos < size-1)
            arr[++(*pos)]=n;
        else
        {
            printf("The array is full\n");
            break;
        }
        printf("Continue y/n : ");
        scanf(" %c",&ch);
        }while(ch !='n');

}
void appendarr(int *arr,int size,int *pos)
{
    int n;
    int ch;
        do
        {
        printf("Enter the number to add : ");
        scanf(" %d",&n);
        if(n == -1)
            break;
        if(*pos < size-1)
            arr[++(*pos)]=n;


        }while(n != -1);

}
void printarray(int *arr, int pos)
{
    int i;
    for(i=0;i <= pos;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int appendvalue(int *arr, int size, int pos, int value)
{
    if(pos < size-1)
    {
        arr[++pos]=value;
    }
    else
    {
        printf("The array is full\n");

    }
    return pos;

}

int insertvalue(int *arr, int size, int pos, int value, int inspos)
{
    int i=pos;
    while(i>=inspos)
    {
        printf("Copying (%d - %d) to (%d)\n",i,arr[i],i+1);
        arr[i+1]=arr[i];
        i--;
    }
    arr[inspos]=value;
    printarray(arr, pos+1);
    return pos+1;

}

int deletebyposition(int *arr, int size, int pos,int delpos)
{
    int i;
    for(i=delpos;i<=pos;i++)
    {
        arr[i]=arr[i+1];
    }
    return pos-1;

}

void deletebyvalue(int *arr, int size, int pos,int delvalue)
{

}

int searchvalue(int *arr, int size, int pos,int srchvalue)
{
    for(int i=0;i<=pos;i++)
        if(arr[i]==srchvalue)
            return i;
    return -1;

}

void updatevalue(int *arr, int size, int pos, int oldvalue, int newvalue)
{
    int p;
    p=searchvalue(arr, size, pos, oldvalue);
    if(p != -1)
    {
        arr[p]=newvalue;
    }
    else
    {
        printf("%d is not found in the array\n",oldvalue);
    }
}

void main()
{
    int arr[sz]={10,20,30,40,50};
    int pos=-1, p, c;
    int n;
    int oldvalue, newvalue;
    int ch;
    do
    {
        printf("1. Append in array\n");
        printf("2. Append single value in array\n");
        printf("3. Insert in array\n");
        printf("4. Update in array\n");
        printf("5. Delete by position in array\n");
        printf("6. Delete by value in array\n");
        printf("7. Search in array\n");
        printf("8. Clear array\n");
        printf("9. Print array\n");
        printf("0. Exit\n");
        printf("Enter your choice (0-8) : ");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            appendarr(arr,sz,&pos);
            break;
        case 2:
            printf("Enter number to append : " );
            scanf(" %d",&n);
            pos=appendvalue(arr,sz, pos, n);
            break;
        case 3:
            printf("Enter number to insert : " );
            scanf(" %d",&n);
            printf("Enter position  : " );
            scanf(" %d",&p);
            pos=insertvalue(arr, sz, pos, n, p);
            break;
        case 4:
            //update value

            printf("Enter value to update  : " );
            scanf(" %d",&oldvalue);
            printf("Enter the new value    : " );
            scanf(" %d",&newvalue);
            updatevalue(arr, sz, pos, oldvalue, newvalue)

            break;
        case 5:
            //delete value
            printf("Enter position  : " );
            scanf(" %d",&p);
            pos=deletebyposition(arr,sz,pos,p);

            break;
        case 6:
            printf("Enter value to delete  : " );
            scanf(" %d",&n);
            p=0;
            c=0;
            while(p != -1)
            {
                    p=searchvalue(arr, sz, pos, n);
                    if(p != -1)
                    {
                        pos=deletebyposition(arr,sz,pos,p);
                        c++;
                    }
            }

            if(c == 0)
                printf("The value %d does not exist in the array\n",n);
            else
                printf("The value %d deleted %d time in the array\n",n,c);
            break;
        case 7:
            //search value
            printf("Enter number to search : " );
            scanf(" %d",&n);
            p=searchvalue(arr, sz, pos,n);
            if(p != -1)
                printf("%d is found at %d\n",n,p);
            else
                printf("%d is not found in the array\n",n);
            break;
        case 8:
            pos=-1;
            break;
        case 9:
            printarray(arr,pos);
            break;
        case 0:
            printf("Exiting....\n");
            break;
        default:
            printf("Invalid choice ....\n");
            break;
        }

    }while(ch != 0);


    printf("\n");
}
