#include<stdio.h>
main()
{
    int N;
    int ld,fd;
    printf("enter the number\n");
    scanf("%d",&N);
    ld=N%10;
    printf("ld=%d\n",ld);
     fd=N/1000;
     printf("fd=%d\n",fd);
}
