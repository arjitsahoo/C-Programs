#include<stdio.h>

int main(){
    FILE *fptr;
    // fptr = fopen("File.txt", "r");
    // fptr = fopen("File.txt", "w");

    // // Check file exists or not
    // if (fptr == NULL){
    //     printf("Flie does not exist");
    // }
    // else{
    //      fclose(fptr);
    // }
    
    //Reading from a file
    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c \n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c \n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c \n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c \n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c \n", ch); 
    //OR
    // printf("%c \n", fgetc(fptr));   
    // printf("%c \n", fgetc(fptr));   
    // printf("%c \n", fgetc(fptr));   
    // printf("%c \n", fgetc(fptr));   
    // printf("%c \n", fgetc(fptr));   

    // Writing to a file
    // char ch;
    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'n');
    // fprintf(fptr, "%c", 'g');
    // fprintf(fptr, "%c", 'o');
    //OR
    // fputc('M', fptr);
    // fputc('a', fptr);
    // fputc('n', fptr);
    // fputc('g', fptr);
    // fputc('o', fptr);

    // fprintf(fptr, "%s", " Mango");



    //Qn
    // char ch;
    // ch = fgetc(fptr);
    // while( ch != EOF){
    //     printf("%c", ch);
    //     ch = fgetc(fptr);
    // }
    // printf("\n");

    //Qn - Read 5 integers from a file.
    // int num;
    // fscanf(fptr, "%d", &num);
    // printf("%d \n", num);
    // fscanf(fptr, "%d", &num);
    // printf("%d \n", num);
    // fscanf(fptr, "%d", &num);
    // printf("%d \n", num);
    // fscanf(fptr, "%d", &num);
    // printf("%d \n", num);
    // fscanf(fptr, "%d", &num);
    // printf("%d \n", num);


    //Qn - Input student details to a file
    fptr = fopen("FileStudent.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name :");
    scanf("%s", name);
    printf("Enter age :");
    scanf("%d", &age);
    printf("Enter cgpa :");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name: %s \n", name);
    fprintf(fptr, "Student age: %d \n", age);
    fprintf(fptr, "Student cgpa: %f \n", cgpa);



    fclose(fptr);

    return 0;
}