#include<stdio.h>
int rev(int);
main()
{
    int n,reverse;//variable declaration
    FILE*fp=fopen("file2.txt","r");//to open the read file
    FILE*fp1=fopen("pqr.txt","w");//to open the write file
    fscanf(fp,"%d",&n);//take inputs from the user
    printf("Entered number is %d\n",n);//to print the number on console
    reverse =rev(n);//function call
    fprintf(fp1,"%d",reverse);//to print the output on file
    printf("rev=%d",reverse);//to print output on the console

}
int rev(int n)
{
    int ld,reverse=0;//initialise the variables
    while(n!=0)//condition
    {
    ld=n%10;//to extract last digit
    reverse=reverse*10+ld;//to get reverse of a number
    n=n/10;//to extract 1st digit
    }
  return (reverse);


}





