#include <stdio.h>

void selectionSort(int arr[], int size);

void bubbleSort(int arr[], int size);

void printArray(int arr[], int size);

int main()
{
    int arr[] = {1, 5, -9, 0, 58, 26, 109, 98};
    int size = sizeof(arr) / sizeof(arr[0]);

    // selectionSort(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}


void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void selectionSort(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bubbleSort(int arr[], int size){
    for(int i=0; i < size-1; i++){
        for(int j=0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } 
    }
}