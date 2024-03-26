#include<stdio.h>
main()
{
   int ld,n,s=0;///Read all the variables
   FILE*fp;///initialise file pointer
   FILE*fp1;///initialise the file pointer
   fp=fopen("axe.txt","w");///open the write file
   fp1=fopen("file2.txt","r");///open the read file
   fscanf(fp1,"%d",&n);///read the number in file
   printf("Given value %d\n",n);///To print the number on console
   while(n!=0) ///check condition
   {
       ld=n%10;///To extract last digit
       n=n/10;///To extract 1st digit
       s=s+ld; ///store the sum in s

   }

     fprintf(fp,"%d",s);///To print output on file
     printf("s=%d",s);///To print output on console


}
