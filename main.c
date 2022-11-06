#include <stdio.h>

int main(){
  int x=1;
  switch (x){
  case 0:
    puts("x is 0");
    break;
  case 1:
    puts("x is 1");
    break;
  default:
    puts("x is something else");
    break;
  }
  return 0;
}
