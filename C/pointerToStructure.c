#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main()
{
    struct student s1 = {"Arjit", 223, 8.9};
    // printf("Student name = %s \n", s1.name);

    // printInfo(s1);

    struct student *ptr = &s1;
    printf("Student -> name = %s \n", ptr->name);
    printf("Student -> roll = %d \n", ptr->roll);
    printf("Student -> cgpa = %f \n", ptr->cgpa); 

    return 0;
}

void printInfo(struct student s1)
{
    printf("Student Information: \n");
    printf("Student name = %s \n", s1.name);
    printf("Student roll = %d \n", s1.roll);
    printf("Student cgpa = %.1f \n", s1.cgpa);
}