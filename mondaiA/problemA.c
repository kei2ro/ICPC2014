#include<stdio.h>
int main(){
  int x, y;
  int a, b;
  int xtax, ytax;
 int s;
 int i, j;
 int X, Y;
 int max;
 int newtax;
 while(1){
   if(x == 0 && y == 0 && s == 0){
     break;
   }
   scanf("%d %d %d", &x, &y, &s);
   xtax = 100 + x;
   ytax = 100 + y;
   max = 0;
   for(i = 1;i < s;i++){
     X = i * xtax / 100;
     for(j = 1;j < s;j++){
       Y = j * xtax / 100;
       if(Y == s - X){
	 a = i * ytax / 100;
	 b = j * ytax / 100;
	 newtax = a + b;
	 if(max < newtax){
	   max = newtax;
	 }
       }
     }
   }
   printf("%d\n", max);
 }
 return 0;
}
