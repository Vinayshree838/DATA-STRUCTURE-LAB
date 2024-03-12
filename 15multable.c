#include<stdio.h>
void multiplication_table(int);
main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    multiplication_table(n);
}
void multiplication_table(int n)
{
    int i,p;
    for(i=1;i<=10;i++)
    {
        p=i*n;
        printf("%d*%d*%d\n",n,i,p);
    }
}
