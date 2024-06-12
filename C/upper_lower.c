#include<stdio.h>
int main()
{
//    char ch;
//    printf("Enter a character\n");
//    scanf("%c", &ch);

//    if(ch>= 'A'&& ch<= 'Z')

//    printf("Uppercase\n");

//    else if( ch>= 'a' && ch<= 'z')

//     printf("Lowercase\n");

//     else{
//         printf("Not a valid charater");
//     }

 int mark;
 printf("Enter your mark\n ");
 scanf("%d", &mark);

 if(mark>=0 && mark<30)
 {
    printf("C grade \n");
 }
    else if (mark>=30 && mark<70)
    {
        printf("B grade\n");
    }
    else if (mark>=70 && mark<=100)
    {
        printf("A grade\n");
    }
else
    printf("Enter a valid number\n");
    return 0;

}