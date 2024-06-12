#include<stdio.h>

int fibo(int x);
long int fact(int num);
int main(){
    int n;
    printf("Enter number of terms \n");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("%d, ", fibo(i));
    }


    // printf("Enter the number  \n");
    // scanf("%d", &n);

    // int facto = fact(n);
    // printf("Factorial of %d = %d", n,facto);

    return 0;
}

int fibo(int x){
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else 
        return (fibo(x-1) + fibo(x-2));
    
}

long int fact (int x){
    if(x == 0){
        return 1;
    }
    else{
        return (x * fact(x-1));
    }
}