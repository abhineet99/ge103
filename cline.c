#include<stdio.h>
 int main(int argc, char *argv[]) {
  int iLoop,iTest;
  iLoop=0;
  while(argv[1][iLoop]!='\0')
   iLoop++; //iLoop gets the size of the string
  iTest=iLoop
  for(iLoop=1;iLoop<iTest/2;iLoop++)
  {
    if(argv[1][iLoop]!=argv[1][iTest-1-iLoop]){
     printf("not palindrome\n");return;
    }
  }
  if (iTest==argc-1)
  printf("palindrome\n" );
  return 0;
}

