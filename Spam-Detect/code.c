

  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
   struct wordinfo
  {
  	char word[15];
  	int sum_distance;


  };
  int main()
  { int iLoop,cursor=0,maincheck=0,spamcheck=0,hamcheck=0;

    struct wordinfo wordmatrix[15][650];//k=15, about 650 words expected per cluster

    for(iLoop=0;iLoop<15;iLoop++)

      {
      	sprintf((wordmatrix[iLoop][0]).word,"%s %d", "cluster", iLoop+1);//first row of 2D AoS is filled with cluster number


      }


  	char cGet='c';

  	FILE *f_pointer;

  	f_pointer=fopen("english.txt","r");

  	if(f_pointer==NULL)
  	{
  		printf("COULDN'T OPEN FILE\n");
  	}
  	else
  	{
  		while(maincheck<(501+41))
  		{  
  		   char sent[200];
  			 maincheck++;
  			while(cGet!='\n') //Input a whole sentence
  			{
				cGet=getc(f_pointer);
  				sent[cursor]=cGet;
  				cursor++;
			//	printf("%c",cGet);
  			}
;                         if(spamcheck<15)
                          {
				
			     
  			     if(sent[cursor-3]=='m'&&sent[cursor-4]=='a'&&sent[cursor-5]=='p'&&sent[cursor-6]=='s')
  			        {     printf("satisfied");    char *token = strtok(sent, "- ,.");


                                     while (token != NULL)
                                     {
                                         if(strlen(token)>2)
                                         {
                                           sprintf((wordmatrix[1][spamcheck]).word,"%s ", token);
                                        // &(wordmatrix[1][spamcheck].word)=token;
                                         }
                                     token = strtok(NULL, "- ,.");
                                     

  				 spamcheck++;

  			             }
  			 
  		               }
  	                 }
               }
     }
   return 0;
  }

