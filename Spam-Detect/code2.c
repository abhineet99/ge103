

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

  	FILE *f_pointer,*fp_train,*fp_test;
	
	fp_train=fopen("train.txt","w");
	fp_test=fopen("test.txt","w");
  	f_pointer=fopen("english.txt","r");

  	if(f_pointer==NULL)
  	{
  		printf("COULDN'T OPEN FILE\n");
  	}
	/*else
	{
		char sent[200];
		while((cGet!=EOF)&&maincheck<501+41+1) //Input the file till 41 spam and 501 ham
  			{
				cGet=getc(f_pointer);
  				/*sent[cursor]=cGet;
  				cursor++;
				if(cGet=='\n')
				{
				if(sent[cursor-3]=='m'&&sent[cursor-4]=='a'&&sent[cursor-5]=='p'&&sent[cursor-6]=='s'&&spamcheck<502)
				spamcheck++;
				else if(sent[cursor-3]=='m'&&sent[cursor-4]=='a'&&sent[cursor-5]=='p'&&sent[cursor-6]=='s')
				for(iLoop=2;iLoop)
				hamcheck++;
				//printf("W__O__R__K__K__I__N__G"); 
				}
				//printf("%d",maincheck);
				printf("%c",cGet);
  			}
			
	}*/
  	else
  	{
  		while(1)
  		{  
  		   char sent[200];
		   //char *enter;
		    
  		cGet='c';
			
  			while(cGet!='\n') //Input a whole sentence
  			{
				cGet=fgetc(f_pointer);
				if(cGet==EOF)
				break;
  				sent[cursor]=cGet;
  				cursor++;
				//printf("%c",cGet);
  			}
;                         if(cGet==EOF)
				break;
			     
  			    if(sent[cursor-3]=='m'&&sent[cursor-4]=='a'&&sent[cursor-5]=='p'&&sent[cursor-6]=='s')
  			        {    spamcheck++; 
			        if (spamcheck<42)


                                     {//fprintf(fp_train,"%s",sent);
				     fputs(sent,fp_train);
  				      }
				else 


                                     {//fprintf(fp_test,"%s",sent);
				     fputs(sent,fp_test);
  				      }

  			        }
  			    
  		            else  if(sent[cursor-3]=='m'&&sent[cursor-4]=='a'&&sent[cursor-5]=='h')
				{hamcheck++;
                                   if (hamcheck<42)


                                     {//fprintf(fp_train,"%s",sent);
				     fputs(sent,fp_train);
  				      }
				else 


                                     {//fprintf(fp_test,"%s",sent);
				     fputs(sent,fp_test);
  				      }
				}
  	                 
               }
     }
   return 0;
  }

