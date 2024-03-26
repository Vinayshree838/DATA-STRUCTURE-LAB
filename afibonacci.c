 #include <stdio.h>
 int main()
{
  int i, n;
  int t1 = 0, t2 = 1;//// initialize first and second terms
  int nextTerm = t1 + t2;//// initialize the next term (3rd term)
  FILE*fp1;//create pointer to access the write file
  FILE*fp2;//create pointer to access the read file
  fp1=fopen("xyz.txt","w");//to open write file
  fp2=fopen("file2.txt","r");//to open read file
  fscanf(fp2,"%d", &n);// get no. of terms from user
  printf("Entered number is %d \n",n);//to print the number of terms
  printf("Fibonacci Series: %d %d ", t1, t2);//to print the fibonacci series/output on console
  fprintf(fp1,"%d %d ", t1, t2);//to print output on file


  // print 3rd to nth terms
  for (i = 3; i <= n; ++i)
    {
    fprintf(fp1,"%d ", nextTerm); //to print next term on file
    printf(" %d ", nextTerm);////to print next term on console
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;//to get next term
   }
  fclose(fp1);
}
