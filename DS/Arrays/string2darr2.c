#include <stdio.h>
#include <string.h>
/*
append
insert
update
delete
search
    char
    string
*/
char str[100][81];
int size=100;
int pos=-1;
void append(char *instr)
{

    if(pos < size-1)
    {
        pos++;
        strcpy(str[pos],instr);
    }
}
void print()
{
    int i;
    printf("\n\nPrinting all rows\n\n");
    for(i=0;i<=pos;i++)
        printf("\t[%d]. %s\n",i,str[i]);
    printf("\n\n\n\n");
}
void insert(int inspos, char *instr)
{
    int i=pos;
    while(i >= inspos)
    {
        strcpy(str[pos+1],str[pos]);
        i--;
    }
    strcpy(str[inspos],instr);
}

void delete(int delpos)
{
    for(int i=delpos;i<pos;i++)
        strcpy(str[i],str[i+1]);

    pos--;
}
void searchchar(char ch)
{
    int i, j;
    for(i=0;i<=pos;i++)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j] == ch)
            {
                printf("[%d]. %s\n",i,str[i]);
                break;
            }

        }
    }
}

void searchstr(char *sub)
{
    int i,j,k,t;
    for(i=0;i<=pos;i++)
    {
        for(j=0,k=0;str[i][j]!= '\0';j++)
        {
            if(str[i][j] == sub[k])
            {
             t=j;
             for(;str[i][t]==sub[k] && sub[k] != '\0' && str[i][t] != '\0';t++,k++);
                    if(sub[k]=='\0')
                    {
                        printf("%s\n",str[i]);
                        break;
                    }
                    else
                    {
                        k=0;
                    }
            }
        }
    }
}
void search(char *sstr)
{
    int i,c=0;
    for(i=0;i<=pos;i++)
    {
        if((strcmp(str[i],sstr))== 0)
        {
            printf("%s is found at %d\n",sstr, i);
            c++;
        }
    }

    if(c == 0)
        printf("%s is not found\n",sstr);

}
void main()
{
    int ch;
    char instr[81];
    int inspos;
    char c;
    do
    {
        printf("1. Append\n");
        printf("2. Insert\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Search Char\n");
        printf("6. Search Substring\n");
        printf("7. Search\n");
        printf("8. Print all strings\n");
        printf("0. Exit\n");
        printf("Enter your choice : ");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            do
            {
            printf("Enter a string to append (type 'end' to exit) : ");
            //gets(instr);
            scanf(" %[^\n]",instr);
            if((strcmp(instr,"end"))!= 0)
                append(instr);
            }while((strcmp(instr, "end"))!= 0);


            break;
        case 2:
            printf("Enter the string to insert:");
            scanf(" %[^\n]",instr);
            printf("Enter the position to insert : ");
            scanf(" %d",&inspos);
            insert(inspos, instr);
            break;
        case 3:
            //update
            break;
        case 4:
            //delete
            printf("Enter the pos to delete : ");
            scanf(" %d",&inspos);
            delete(inspos);
            break;
        case 5:
            printf("Enter character to search : ");
            scanf(" %c",&c);
            searchchar(c);
            break;
        case 6:
            printf("Enter substring to search : ");
            scanf(" %s",instr);
            searchstr(instr);
            break;
        case 7:
            printf("Enter string to search : ");
            scanf(" %s",instr);

            search(instr);
            break;
        case 8:
            print();
            break;
        case 0:
            printf("Exiting....\n");
            break;
        default:
            break;
        }

    }while(ch != 0);



}
