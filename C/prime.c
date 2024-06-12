// #include<stdio.h>
// int main()
// {
   //  int num, sum=0 ;
   //  printf("Enter a number \n ");
   //  scanf("%d", &num);

   //  for(int i=1; i<=num; i++)
   //  {
   //   if(num%i ==0) 
   //   {
   //    sum++;
   //   }
   //  }
     
   //     if(sum==2){
   //     printf("It is a prime number");
   //     }
   //     else
   //       {
   //          printf("It is not a prime number");
   //       }
   //   return 0;
// }
   

#include<stdio.h>

int main()
{
   int n1,n2,i,j;
   printf("Enter range :");
   scanf("%d %d",&n1,&n2);

   printf("Prime numbers between %d and %d are :", n1,n2);

   for(i=n1; i<=n2; i++)
   {
      for(j=2; j<=i; j++){
         if(i%j ==0)
         break;
      }
      if(i==j)
      printf("%d ",j);
   }
   return 0;
}