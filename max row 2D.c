#include<stdio.h>
void read(int [100][100],int,int);
void display(int [100][100],int,int);
void max (int [100][100],int,int);
main()
{
    int a[100][100],r,c;
    printf("enter the value of r and c\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    display(a,r,c);
    max(a,r,c);
}
void read(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void max (int a[100][100],int r,int c)
{
    int i,j,m;
    for(i=0;i<r;i++)
    {
      m=a[i][0];
      for(j=1;j<c;j++)
      {
          if(m<a[i][j])
          {
              m=a[i][j];
          }
      }
       printf("max=%d",a[i][j]);
    }

}

