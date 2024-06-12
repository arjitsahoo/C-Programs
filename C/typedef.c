#include<stdio.h>
#include<string.h>

typedef struct student
    {
       char name[100];
       int roll;
       float cgpa;
    } stu ;

typedef struct ComputerEngineeringStudent{
    char name[100];
    int roll;
    float cgpa;
} coe ;

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAddress(struct address adds);

int main(){
    // coe s1;
    // strcpy(s1.name, "Arjit");
    // s1.roll = 223;
    // s1.cgpa = 8.9;

    // printf("Name = %s \n", s1.name);
    // printf("Roll = %d \n", s1.roll);
    // printf("Cgpa = %f \n", s1.cgpa);


    //Qn

    struct address adds[5];

    // printf("Enter address of person 1 : \n");
    // scanf("%d", &adds[0].houseNo);
    // scanf("%d", &adds[0].block);
    // scanf("%s", &adds[0].city);
    // scanf("%s", &adds[0].state);

    // printf("Enter address of person 2 : \n");
    // scanf("%d", &adds[1].houseNo);
    // scanf("%d", &adds[1].block);
    // scanf("%s", &adds[1].city);
    // scanf("%s", &adds[1].state);

    // printf("Enter address of person 3 : \n");
    // scanf("%d", &adds[2].houseNo);
    // scanf("%d", &adds[2].block);
    // scanf("%s", &adds[2].city);
    // scanf("%s", &adds[2].state);

    // printf("Enter address of person 4 : \n");
    // scanf("%d", &adds[3].houseNo);
    // scanf("%d", &adds[3].block);
    // scanf("%s", &adds[3].city);
    // scanf("%s", &adds[3].state);

    // printf("Enter address of person 5 : \n");
    // scanf("%d", &adds[4].houseNo);
    // scanf("%d", &adds[4].block);
    // scanf("%s", &adds[4].city);
    // scanf("%s", &adds[4].state);

    // printAddress(adds[0]);
    // printAddress(adds[1]);
    // printAddress(adds[2]);
    // printAddress(adds[3]);
    // printAddress(adds[4]);

    // OR

    for(int i=1; i<=5; i++){
    printf("Enter address of person %d : \n", i);
    scanf("%d", &adds[i-1].houseNo);
    scanf("%d", &adds[i-1].block);
    scanf("%s", &adds[i-1].city);
    scanf("%s", &adds[i-1].state);

    }

    for(int i=0; i<5; i++){
        printAddress(adds[i]);
    }
    
    return 0;
}

void printAddress(struct address adds){
    printf("Address is : %d, %d, %s, %s \n", adds.houseNo, adds.block, adds.city, adds.state);
}