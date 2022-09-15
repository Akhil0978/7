#include<stdio.h>
#include<string.h>
int main ()
{
    char str[20] [30];
    int i,n,len;
    printf("Enter the no. of strings");
    scanf("%d",&n);
    printf("Enter %d strings \n",n);
    for(i=0;i<=n;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<=n;i++)
    {
        len=strlen(str[i]);
    }
    return 0;
}
