#include<stdio.h>
float sum(float a,float b);
main()
{
    float a,b,s;
    printf("enter 2 numbers\n");
    scanf("%f%f",&a,&b);
    s=sum(a,b);
    printf("sum=%f",s);
}
float sum(float a,float b)
{
    float s;
    s=a+b;
    return s;
}
