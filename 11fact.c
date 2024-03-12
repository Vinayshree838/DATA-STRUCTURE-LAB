#include<stdio.h>
int fact(int);
main()
{
    int n,f;
    printf("enter the value of n\n");
    scanf("%d",&n);
    if(n>=0)
    {
        f=fact(n);
        printf("%d!=%d",n,f);
    }
    else
        printf("invalid\n");
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
