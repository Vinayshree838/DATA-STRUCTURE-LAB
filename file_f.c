#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE*fp=NULL;
    int a=10,i;
    char str[10];
    fp=fopen("abc.txt","w");



    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the string");
    gets(str);

    fprintf(fp,"%d%s",a,str);



    fclose(fp);
}

