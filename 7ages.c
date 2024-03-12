#include<stdio.h>
float min(float,float,float);
main()
{
    float a,b,c,m;
    printf("enter the ages a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    m=min(a,b,c);
    printf("%f\n",m);

}
float min(float a,float b,float c)
{
    float m;
    if(a<b&&a<c)
    {
        m=a;
    }
    else if(c<b&&c<a)
    {
        m=c;
    }
    else if(b<a&&b<c)
    {
        m=b;

    }





    return m;
}
