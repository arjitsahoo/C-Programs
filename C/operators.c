#include<stdio.h>
#include<math.h>
int main()
{
   
    printf("%d \n ",  3 != 2);

    printf("%d \n ",  3 == 3);
     printf("%d \n ",  3 >= 3);
      printf("%d \n ",  3 <= 3);

      printf("%d \n ",  3>2 && 5>2);

      printf("%d \n ",  3>5 || 5>9);
     
     printf("%d \n ",  !(7>5));

     //even- 1
     //odd-0
     int a;
     printf("Enter a number \n");
     scanf("%d",  &a);
     printf("%d", a/2==0);


   return 0;
}
   

