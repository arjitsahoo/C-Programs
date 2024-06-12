#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter number:");
    // scanf("%d",&n);


    // int sum=0;                  //PRINT THE SUM OF FIRST n NATURAL NUMBERS, ALSO PRINT THEM IN REVERSE

    // for(int i=n; i>=1; i--){
    //   sum=sum+i;
    //   printf("%d\n",i);

    // }
    // printf("sum is %d\n",sum);

    // int n;
    // do{
    //     printf("Enter number:");
    //     scanf("%d", &n);
    //     printf("%d \n", n);

    //     if(n%7 == 0){  //multiple of 7
    //         break;
    //     }

    // }while(1);

    // printf("thank you");

    // for(int i=1; i<=10; i++){
    //     if(i==2 || i==6){              //skip
    //     continue;
    //   }
    //   printf("%d \n", i);
    // }

    
    // for(int i=5; i<=50; i++){
    //     if(i%2 !=0){                  //print odd nos. between 5-50
      
    //   printf("%d \n", i);
    //     }
    // }

    int i,sum=0;

    for (i=5; i<=50; i++){
      sum=sum+i;
    }
    printf("Sum is %d",sum);

    return 0;
}