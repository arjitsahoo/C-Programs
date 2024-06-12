#include<stdio.h>
#include<string.h>

struct student
    {
       char name[100];
       int roll;
       float cgpa;
    };

int main(){
    
    // struct student s1;
    // s1.roll = 223;
    // s1.cgpa = 8.9;
    // // s1.name = "Arjit";
    // strcpy(s1.name, "Arjit");

    // printf("Student name = %s \n", s1.name);
    // printf("Student roll = %d \n", s1.roll);
    // printf("Student cgpa = %f \n", s1.cgpa);


    // struct student s2;
    // s2.roll = 106;
    // s2.cgpa = 8.5;
    // strcpy(s2.name, "Choudhury");

    // printf("Student name = %s \n", s2.name);
    // printf("Student roll = %d \n", s2.roll);
    // printf("Student cgpa = %f \n", s2.cgpa);


    // struct student s3;
    // s3.roll = 104;
    // s3.cgpa = 9.7;
    // strcpy(s3.name, "Sabyasachi");

    // printf("Student name = %s \n", s3.name);
    // printf("Student roll = %d \n", s3.roll);
    // printf("Student cgpa = %f \n", s3.cgpa);


    // --------------- Array of Structures ----------------

    // struct student ece[100];
    // ece[0].roll = 223;
    // ece[0].cgpa = 8.9;
    // strcpy(ece[0].name, "Arjit");

    // printf("Student name = %s \n", ece[0].name);
    // printf("Student roll = %d \n", ece[0].roll);
    // printf("Student cgpa = %f \n", ece[0].cgpa);


    // ----------------- Initializing Structures ----------------

    struct student s1 = {"Arjit", 223, 8.9};
    struct student s2 = {"Choudhury", 106, 8.5};
    struct student s3 = {0};

    printf("Student name = %s", s1.name);


    return 0;
}