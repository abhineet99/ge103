#include<stdio.h>
#include<string.h>
int main()
{
printf("Enter the number of names\n");
int iNum,iNum2,iLoop,jLoop;
scanf("%d",&iNum);
printf("Enter the max length of names\n");
scanf("%d",&iNum2);
printf("Enter the names , using lowercase letters only\n");
char cMatr[iNum][iNum2+1];


for(iLoop=0;iLoop<iNum;iLoop++)
scanf("%s",cMatr[iLoop]);
char cSwap[iNum2+1];
for(iLoop=0;iLoop<iNum; iLoop++)
 { for(jLoop=0; jLoop<iNum-1-iLoop; jLoop++)
  { if(strcmp(cMatr[jLoop], cMatr[jLoop+1])>0)
        {	strcpy(cSwap, cMatr[jLoop]);
		strcpy(cMatr[jLoop],cMatr[jLoop+1]);
		strcpy(cMatr[jLoop+1],cSwap);
	}
  }
 }
 printf("The sorted array is as follows:- \n");

 for(iLoop=0;iLoop<iNum;iLoop++)
   printf("%s \n", cMatr[iLoop]);

return 0;
}
