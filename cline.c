#include<stdio.h>
 int main(int argc, char *argv[]) {
  int iLoop,iTest;
  for(iLoop=1;iLoop<argc;iLoop++)
  {
    if(*argv[iLoop]==*argv[argc-iLoop])
    iTest=iTest+1;
  }
  if (iTest==argc-1)
  printf("palindrome\n" );
  return 0;
}

