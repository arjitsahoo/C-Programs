#include<stdio.h>

void printString(char arr[]);

int countLength(char arr[]);

int main(){
    // char fName[] = "Arjit" ;
    // char lName[] = "Sahoo" ;

    // printString(fName);
    // printString(lName);


    char str[100];

    // scanf("%s", str);
    // printf("%s", str);

    // fgets(str, 100, stdin);
    // puts(str);
 

    // char *canChange = "Hello World";
    // puts(canChange);
    // canChange = "Hello";
    // puts(canChange);


    // char cannotChange[20] = "Hello World";
    // puts(cannotChange);
    // cannotChange = "Hello";
    // puts(cannotChange);

    // char name[100];
    // fgets(name, 100, stdin);
    // puts(name);
    // printf("Length is = %d", countLength(name));

    return 0;
}

void printString(char arr[]){
    for (int i=0; arr[i] != 0; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

int countLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
} 