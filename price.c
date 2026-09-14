#include<stdio.h>

void claculatePrice(float value);

int main(){
  float value=100.0;
  claculatePrice(value);
  printf("the value is:%f", value);
  return 0;
}
void claculatePrice(float value){
   value=value+(0.18*value);
   printf("final price is: %f\n", value);

}
