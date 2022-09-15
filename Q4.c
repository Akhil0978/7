#include<stdio.h>
#include<string.h>
int main ()
{
    char a[10] [30] , s[10];
    int i,found =0;
    printf("Enter 5 strings \n");
    for(i=0;i<5;i++)
    {
        gets(a[i]);

    }
    printf("\nEnter a string you want to search \n");
    gets(s);
    for(i=0;i<5;i++)
    {
        if(strcmp(s,a[i])==0)
        {
            found =1;
            printf("String found");
            break;
        }
    }
    if (found == 0)
        printf("Not found");
    return 0;
}
