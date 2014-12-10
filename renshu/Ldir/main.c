#include<stdio.h>
#include<string.h>
int main(){
int count = 0;
int i;
 int nagasa;
char a[10002];
  while(1){
    fgets(a,10002,stdin);
    nagasa = strlen(a);
    for(i = 0;i < nagasa;i++){
	count++;
      }
      printf("%d", count);
      count = 0;
      if(nagasa == 1){
	break;
      }
  }
  return 0;
}
