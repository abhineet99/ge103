#include<stdio.h>
void func()
{
extern int a=10;
}
void main()
{
func();

printf("%d",a);
}
