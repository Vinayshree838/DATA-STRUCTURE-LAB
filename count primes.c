#include<stdio.h>
void read(int [],int);
void display(int[],int);
int count_primes(int[],int);
main()
{
    int N,m[100],c;
    printf("enter the number of elements\n");
    scanf("%d",&N);
    read(m,N);
    display(m,N);
    c=count_primes(m,N);
    printf("count=%d",c);
}
void read(int m[100],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&m[i]);
    }
}
void display(int m[100],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d\t",m[i]);
    }
}
int count_primes(int m[100],int N)
{
    int i,c=0;
  {
    for(i=0;i<N;i++)
    {
        if(N%i==0)
            c++;
    }
    if(c==2)
    {
        printf("prime number\n");
        c++;
    }
  }
  return c;
}

