#include<stdio.h>
#include<string.h>
int main ()
{
    char a[20] [50],t[20];
    int i,j;
    printf("Enter 10 strings \n");
    for(i=0;i<10;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(a[i],a[j]) > 0)
            {
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }
    printf("-------------------------------------------------------------------------\n");
    for(i=0;i<10;i++)
    {
        printf(" %s  \n",a[i]);
    }
    return 0;
}
