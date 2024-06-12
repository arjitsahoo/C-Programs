#include<stdio.h>

void namaste();
void bonjour();

int main()
{
    printf("Enter i for indian & f for french :");
    char ch;
    scanf("%c", &ch);
    if(ch=='i'){
        namaste();
    }
    else if(ch=='f'){
        bonjour();
    }
    else{
        printf("Enter a valid character");
    }
  return 0;
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}