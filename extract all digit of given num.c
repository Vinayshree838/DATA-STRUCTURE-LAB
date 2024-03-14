#include<stdio.h>
void ext_digit(int);
main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    ext_digit(n);
}
void ext_digit(int n)
{
    int ld;
    while(n!=0)
    {
        ld=n%10;
        printf("%d\n",ld);
        n=n/10;
    }
}
