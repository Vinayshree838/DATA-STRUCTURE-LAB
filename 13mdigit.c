#include<stdio.h>
int max(int);
main()
{
    int n,m;
    printf("enter the value of n\n");
    scanf("%d",&n);
    m=max(n);
    printf("max=%d",m);
}
int max(int n)
{
    int max,ld;
    max=n%10;
    while(n!=0)
    {
        ld=n%10;
        if(ld>max)
        {
            max=ld;
        }
        n=n/10;
    }
    return max;
}

