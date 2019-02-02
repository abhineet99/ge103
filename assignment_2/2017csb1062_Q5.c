#include<stdio.h>
#include<stdlib.h>

int prime(int);

void swap(int *x, int *y)
{
    int temp1 = *x;
    *x = *y;
    *y = temp1;
}

void sort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
  
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void main(int argi,char *argv[])
{
int ret;
int index;
int value[argi-1];
for(index=1;index<argi;index++){

	value[index-1]=atoi(argv[index]);
	}
	sort(value, argi-1);
	index = argi-2;
	ret = prime(value[index]);
	while(ret!=1){
		index--;
		if(index==-1){
			printf("No primes found.");
			return;
		}
		ret = prime(value[index]);
	}
	printf("Max prime entered is %d\n",value[index]);
	}
int prime(int num)
{

int temp;
for(temp=2;temp<num/2+1;temp++)
	{
	if(num%temp==0)
		return 0;
	}
return 1;
}
