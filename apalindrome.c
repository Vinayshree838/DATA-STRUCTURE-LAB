#include<stdio.h>
int pal(int n);
main()
{
   FILE*ptr;
   ptr=fopen("palindrome.txt","r+") ;
   int n,s=0;
   if(ptr==NULL)
   {
       printf("error");
       return 1;
   }
   printf("enter the number\n");
   fscanf(ptr,"%d",&n);
   if(n>0)
   {
       s=pal(n);

   }
   if(s==n)
   {
       fprintf(ptr,"number is palindrome\n");

   }
   else{
    fprintf(ptr,"\n not a palindrome");
   }
   fclose(ptr);
   printf("result is stored in palindrome file\n");

}
int pal(int n)
{
    int ld,s=0;
    while(n!=0)
    {
        ld=n%10;
        s=s*10+ld;
        n=n/10;
    }
    return s;
}
