#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void input ()
{
 FILE *inputfile;
  char lines[40];
  const char s[2] = ",";//for comma separator
	char *token1;
	int a=0;
	int j1=0;
        int dest[144];
	int source[144];
	int src01[144];
	int src02[144];
	int dest01[144];
	int dest02[144];	
        
           
//no of src and dest comb
     struct input
	     { 
                 //int comb_no;
		 int src1; 
		 int src2; 
		 int dest1; 
		 int dest2;
	     }
 node1[144];
 inputfile=fopen ("/home/saranya/april/may/input1.txt","r");
 if(inputfile == NULL) {
        perror("Error opening file");
                       }
 while( fgets (lines, sizeof(lines), inputfile)!=NULL ) 
    {

         token1 = strtok(lines, ",");//get the first token 
         while( token1 != NULL )//walk through other tokens */
		 {
		                               
                                               
		                               node1[a].src1 = atoi(token1);
		                               token1 = strtok(NULL, ",");
		                               node1[a].src2= atoi(token1);
		                               token1 = strtok(NULL, ",");
		                               node1[a].dest1= atoi(token1);
		                               token1 = strtok(NULL, ",");
		                               node1[a].dest2= atoi(token1);
		                               token1 = strtok(NULL, ",");
		                               a++;
		 }

   }
	for(j1=0;j1<1;j1++)
	    { //printf("********************************************************************************************************\n");
//printf("Node elements:  comb_no %d src1 %d src2 %d dest1 %d dest2 %d\n",node1[j1].comb_no,node1[j1].src1,node1[j1].src2,node1[j1].dest1,node1[j1].dest2);		       
	                src01[j1]=node1[j1].src1;
			src02[j1]=node1[j1].src2;               
			dest01[j1]=node1[j1].dest1;
			dest02[j1]=node1[j1].dest2;
		        route(src01[j1],src02[j1],dest01[j1],dest02[j1]);
	   }
fclose(inputfile);      
}

