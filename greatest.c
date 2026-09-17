#include<stdio.h>

int main() {
  int a=10;
  int b=25;
  int c=15;

  if(a>=b && a>=c) 
    printf("Greatest=%d",a);
  else if(b>=a && b>=c)
    printf("Greatest=%d",b);
  else
    printf("Greatest=%d",c);
  return 0;
}
