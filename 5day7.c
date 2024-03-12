#include<stdio.h>
main()
{
    int i;
    printf("enter the value of i\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:printf("monday\n");
          break;
        case 2:printf("tuesady\n");
          break;
        case 3:printf("wednesday");
          break;

        case 4:printf("thursday");
          break;
        case 5:printf("friday");
          break;
        case 6:printf("saturday");
          break;
        case 7:printf("sunday\n");
          break;
        default :printf("wednesday");


    }
}
