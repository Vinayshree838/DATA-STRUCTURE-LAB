#include<stdio.h>
void read(int[],int);
void display(int[],int );
void swap(int [],int);
main()
{
    int n;
    int a[100];
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    swap(a,n);
}
void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void swap(int a[100],int n)
{
    int i,j,temp,m[j];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
          if(m[j]>m[j+1])
           {
              temp=m[j];
              m[j]=m[j+1];
              m[j+1]=temp;
           }
        }
    }
}

