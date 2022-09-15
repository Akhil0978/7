#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100] [100];
    int i,n;
    printf("Enter the no. of strings  :  ");
    scanf("%d",&n);
    printf("Enter %d strings \n" ,n );
    for(i=0;i<=n;i++)
    {
        gets(a[i]);

    }
    printf("--------------------------------------------------------------------------------------\n");
    printf("Entered strings are \n");
    for(i=0;i<=n;i++)
    {
        puts (a[i]);

    }
    return 0;
}
