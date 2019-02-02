#include<stdio.h>

int main()
{

printf("Enter the number of values\n");
int iSize,iLoop,iLoop2,iSum;
scanf("%d",&iSize);
int iArr[iSize];
for(iLoop=0;iLoop<iSize;iLoop++)
*(iArr+iLoop)=rand()%20+1;
for(iLoop=0;iLoop<iSize;iLoop++)
printf("%d   ",*(iArr+iLoop));
printf("\n");
for(iLoop=0;iLoop<iSize;iLoop++)
{
iSum=1;
for(iLoop2=iLoop+1;iLoop2<iSize;iLoop2++)
{
if(*(iArr+iLoop)==*(iArr+iLoop2)&&*(iArr+iLoop)!=0)
{
iSum=iSum+1;
*(iArr+iLoop2)=0;
}
}
if(iSum>1)
printf("%d occurs %d times in the array\n",*(iArr+iLoop),iSum);
}
return 0;
}
