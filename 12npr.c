#include<stdio.h>
int fact (int);
float npr(int,int);
main()
{
    int n,r;
    float res;
    printf(".enter the value of n and r\n");
    scanf("%d%d",&n,&r);
    res=npr(n,r);
    printf("npr=%f",res);
}
float npr(int n,int r)
{
    float res;
    float a,b;
    a=fact(n);
    b=fact(n-r);
    res=a/b;
    return res;
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
