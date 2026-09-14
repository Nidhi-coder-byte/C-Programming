#include<stdio.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
  float side, a, b, rad;
  printf("enter side of a square:");
  scanf("%f", &side);
  printf("enter radius of circle:");
  scanf("%f", &rad);
  printf("enter length of rectangle:");
  scanf("%f", &a);
  printf("enter breadth of rectangle:");
  scanf("%f", &b);
  printf("area of square is:%f\n", squareArea(side));
  printf("area of circle is:%f\n", circleArea(rad));
  printf("area of rectangle is:%f\n", rectangleArea(a,b));



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
