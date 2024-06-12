#include<stdio.h>
#include<string.h>
int main()
{
    // int f=0, s=1, n,t;
    // printf("Enter number of terms upto which fibonacci series to be printed\n");
    // scanf("%d", &n);
    // printf("%d %d ",f,s);

    // while(n-2 > 0)
    // {
    //     t=f+s;
    //     printf("%d ",t);
    //     f=s;
    //     s=t;
    //     n--;
    // }

    char city1[] = "Bangalore ";
    char city2[] = "Mangalore";

    // strcat(city1, city2);
    // printf("%s", city1);

    // printf("%d", strcmp(city1, city2));       // Checks two strings are equal or not

    // printf(strupr(city1));                       // Lowercase to Uppercase
    // printf(strlwr(city1));                       // Uppercase to Lowercase

    // char ch[2];
    // printf("Enter a character\n");
    // scanf("%s", &ch);
    // printf("%s", ch);

    char ch1[] = "Sita" ;
    int length = strlen(ch1) ;
    // printf("%d", length);


    strcpy(city1, city2);
    // printf("%s", city1);

    char st[4];
    gets(st);

    printf("%c",st[1]);

    return 0;
}