#include<stdio.h>
int arm(int);
main()
{
    int n,sum;
    printf("enter a number\n");
    scanf("%d",&n);
    if(sum==n)
    {
        printf("armstrong");
    }
        else
            printf("not armsrong\n");

}
int arm(int n)
{
    int ld,sum=0;
    while(n!=0)
    {
        ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
        return sum;
    }
}
