#include<stdio.h>
#include<math.h>

/*int sum(int a,int b);

int main(){
    int a, b;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("Sum is : %d", s);
    return 0;
}

int sum(int x, int y){
    return x + y;
}

void printTable(int n);
int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    printTable(n);
    return 0;


}
void printTable(int n){
    for(int i=1; i<=10; i++){
        printf("%d ",i*n);
    }

}

void calculatePrice(float value);
int main(){
    float value;
    printf("Enter value :");
    scanf("%f",&value);
    calculatePrice(value);
    return 0;
}
void calculatePrice(float value){
    value=value+(0.18*value);
    printf("Final price is %f",value);

}*/
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);


int main()
{
   float side=10.0;
   float a=20.0, b=10.0;
   float rad=22.0;
   printf("Area of square is %f\n",squareArea(side)); 
   printf("Area of circle is %f\n",circleArea(rad)); 
   printf("Area of rectangle is %f", rectangleArea(a,b)); 

    return 0;
}
float squareArea(float side){
    return side*side;
}
float circleArea(float rad){
    return 3.14*rad*rad;
}
float rectangleArea(float a, float b){
    return a*b;
}
