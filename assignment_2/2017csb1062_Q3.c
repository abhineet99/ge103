#include <stdio.h>

void main()
{ int *iTrade,iNum,iSize,iLoop2;

void calc_fact(int , int *);
printf("Enter the number of numbers\n");
scanf("%d",&iSize);
for (iLoop2=0;iLoop2<iSize;iLoop2++)
{  printf("Enter the number of numbers\n");
  scanf("%d",&iNum);
  calc_fact(iNum,iTrade);
  printf("%d\n",*iTrade);

}
}
void calc_fact(int a, int *b)
{
int iFact=0,iLoop;
for(iLoop=1;iLoop<=a;iLoop++)
{
if(a%iLoop==0)
iFact=iFact+1;
}
*b=iFact;

}

