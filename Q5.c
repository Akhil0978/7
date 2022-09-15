#include<stdio.h>
#include<string.h>
int main ()
{
    char a[10] [30];
    int i,n;
    printf("Enter the no. of strings");
    scanf("%d",&n);
    printf("Enter %d email id's \n",n);
    for(i=0;i<=n;i++)
    {
        gets(a[i]);
    }
    printf("----------------------------------------------------------------------\n");
    printf("The valid Email id 's are : \n");
    for(i=0;i<=n;i++)
    {
        if(strchr(a[i],'@')!=0)
        {
            printf("%s\n",a[i]);
        }
    }
    return 0;
}
