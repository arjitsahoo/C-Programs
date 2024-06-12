#include<stdio.h>

void linearSearch(int arr[], int size, int num);

int binarySearch(int arr[], int l, int r, int num);

int main(){
    int arr[] = { 1, 2, 7, 10, 25, 58, 89, 125, 256};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int num;
    
    printf("Enter the number to be searched: ");
    scanf("%d", &num) ;
    // linearSearch(arr, n, num);
    
    int result = binarySearch(arr, 0, n-1, num);
    if(result == -1){
        printf("The number is  not present ");
    }else{
        printf("The number is present at index %d", result);

    }

    return 0;
}


void linearSearch(int arr[], int size, int num){
    for(int i=0; i < size ; i++){
        if(arr[i] == num){
            printf("The number is present at index %d", i);
            return;
        }   
    }
    printf("The number is  not present ");
    return;
}


int binarySearch(int arr[], int l, int r, int num){

    while(l <= r){
        int mid = l + (r-l)/2 ;

        if(arr[mid] == num){
            return mid ;
        }
        if(arr[mid] < num){
            l = mid +1;
        }else{
            r = mid - 1;
        }
    }
    return -1;
}