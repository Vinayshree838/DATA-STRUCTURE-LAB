#include<stdio.h>
int sum(int);
main()
{
    int n,s;
    printf("enter the value of n\n");
    scanf("%d",&n);
    s=sum(n);
    printf("sum=%d",s);
}
int sum(int n)
{
    int s=0,i=1;
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    return s;
}


