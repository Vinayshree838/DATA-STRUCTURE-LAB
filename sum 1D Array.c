#include<stdio.h>
void read(float[],int);
void display(float[],int);
float sum(float[],int);
main()
{
   int n;
   float m[100];
   float s;
   printf("enter the number of students\n");
   scanf("%d",&n) ;
   read(m,n);
   display(m,n);
   s=sum(m,n);
   printf("sum=%f\n",s);
}
void read(float m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&m[i]);
    }
}
void display(float m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%f\n",m[i]);
    }
}
float sum(float m[100],int n)
{
    int i;
    float s=0;
    for(i=0;i<n;i++)
    {
        s=s+m[i];
    }
    return s;

}
