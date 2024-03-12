#include<stdio.h>
main()
{
    float a,r;
    printf("enter the value of radius\n");
    scanf("%f",&r);
    if(r>=0)
    {
        a=3.142*r*r;
        printf("area=%f",a);
    }
    printf("invalid input");
}
