#include<stdio.h>
#include<string.h>
int main ()
{
    char ip[10] [30];
    int i,n;
    printf("Enter the no. of strings");
    scanf("%d",&n);
    printf("Enter %d IP addresses \n",n);
    for(i=0;i<=n;i++)
    {
        gets(ip[i]);
    }
    for(i=0;ip[i];i++)
    {
    char *a=strtok(ip,".");
    while(a!=NULL)
    {
        int x=atoi(a);
        if((x>=0)  &&   (x<=255))
            printf("%d ",x);
        a= strtok(NULL,".");
    }
    }
    return 0;
}
