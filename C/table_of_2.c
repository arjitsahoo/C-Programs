#include<stdio.h>

int main(){

    int n,i;
    
    printf("Enter the number of which the table you want in reverse :");
    scanf("%d",&n);

    // for (i=1; i<=10; i++)
    // {
    //     printf("%d\n",n*i);
    // }

    for (i=10; i>=1; i--)
    {
        printf("%d\n",n*i);
    }


    return 0;
}