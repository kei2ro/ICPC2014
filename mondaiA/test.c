#include<stdio.h>
int add(int c, int d);
int main(){
  int a, b;
    int adddata;
  scanf("%d", &a);
  scanf("%d", &a);
  adddata = add(a, b);
  printf("%d\n", adddata);
  return 0;
}

int add(int c, int d){
  int addnow = c + d;
  return addnow;
}
