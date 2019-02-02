#include<stdio.h>
#include<string.h>
void main()
{
char str1[400];
char str2[200];

printf("Enter the first Word : \n");
scanf("%s",str1);
printf("Enter the second Word :\n");
scanf("%s",str2);

int l1 = strlen(str1);
int l2 = strlen(str2);
int i=0;
while(str2[i]!='\0'){
    str1[l1+i]= str2[i];
    i++;
} 
printf("result:");
for(i=0; i<l1+l2; i++)
printf("%c", str1[i]);
}
