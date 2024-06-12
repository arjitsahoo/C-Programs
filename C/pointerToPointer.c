#include<stdio.h>
#include<math.h>

void square (int *n);

int main(){

    // int x = 5;
    // int *ptr = &x;
    // int **pptr = &ptr;
    // printf("Value of x = %d \n", **pptr); 

    // int num = 5;
    // printf("%f", pow(num, 2));

    // Call by reference

    int number = 5;
    square(&number);
    printf("Number = %d", number);

    return 0;

}

void square (int *n){
    *n = (*n) * (*n);  // 5 * 5
    printf("Square = %d \n", *n);
}