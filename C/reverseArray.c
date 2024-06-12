#include<stdio.h>

void swapInArray(int arr[], int i, int j);

void reverseArray(int arr[], int i, int j);

void printArray(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d \n", n);

    printArray(arr, n);
    reverseArray(arr, 0, n-1);
    printArray(arr, n);

    return 0;
}

void swapInArray(int arr[], int i, int j){

    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void reverseArray(int arr[], int i, int j){

    while (i < j)
    {
        swapInArray(arr, i, j);

        i++;
        j--;
    }
}


void printArray(int arr[], int n){
    for (int i =0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}