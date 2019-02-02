#include <stdio.h>
void main()
{
int *iA;
void cal_f(int **);
cal_f(&iA);
printf("%d",*iA);

}
void cal_f(int **k)
{
  int iB=100;
  *k=&iB;

}

