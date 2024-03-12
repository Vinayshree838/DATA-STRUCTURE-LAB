#include<stdio.h>
int rev(int);
main()
{
    int n,r;
    printf("enter a value of n\n");
    scanf("%d",&n);
    r=rev(n);
    if(r==n)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not a palindrome");
    }
}
int rev(int n)
{
    while (n!=0)
    {
        int ld,r=0;
        ld=n%10;
        r=r*10+ld;
        n=n/10;
    }
    return rev;
}
