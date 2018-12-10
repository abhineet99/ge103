#include<stdio.h>
int a;
void func(){
  extern int a;
  a=10;
}
void main(){
  func();
  printf("%d",a);
}
