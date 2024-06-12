#include<stdio.h>
#include<stdlib.h>

int main(){

    // printf("%d \n", sizeof(int));
    // printf("%d \n", sizeof(float));
    // printf("%d \n", sizeof(double));
    // printf("%d \n", sizeof(char));

    // //Malloc
    // float *ptr;
    // ptr = (float*) malloc(5 * sizeof(float)) ;

    // ptr[0] = 125;
    // ptr[1] = 258;
    // ptr[2] = 369;
    // ptr[3] = 896;
    // ptr[4] = 568.0;

    // for (int i=0; i<5; i++){
    //     printf("%f \n", ptr[i]);
    // }


    //Calloc and Free
    // int *ptr;

    // ptr = (int*)calloc(5, sizeof(int));

    // for (int i = 0; i < 5; i++){
    //     printf("%d \n", ptr[i]);
    // }

    // free(ptr);
    
    // ptr = (int*)calloc(2, sizeof(int));

    // for (int i = 0; i < 2; i++){
    //     printf("%d \n", ptr[i]);
    // }

    //Realloc
    int *ptr;

    ptr = (int*) calloc(5, sizeof(int));

    printf("Enter numbers(5) :");
    for(int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }

    ptr = (int*) realloc(ptr, 8);

    printf("Enter numbers(8) :");
    for(int i=0; i<8; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<8; i++){
        printf("Number %d is %d \n", i, ptr[i]);
    }




    return 0;
}