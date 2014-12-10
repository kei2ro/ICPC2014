#include<stdio.h>

int main(){
  int max = 0;
  int input = -1;
  while(input != 0){
    scanf("%d", &input);
    if(max < input){
      max = input;
    }
  }
  printf("%d", max);
  return 0;
}
