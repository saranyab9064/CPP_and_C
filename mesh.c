#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void mesh_topo ()
{
  FILE *infile;
  char line[40];
  const char s[2] = ",";//for comma separator
	char *token;
	int a=0;
	int j1=0;	
       
        
       
          

//mesh topology
     struct mesh_network
     {
         int id; //node ID
         int left_id;//Left node 
         int right_id; //right node 
         int up_id; //upward node
         int down_id;//downside node
     }
        node[12];//6x6 implementation

	 infile=fopen ("/home/saranya/april/may/mesh1.txt","r");//Fetch the input file which has mesh network connection
	      if(infile == NULL) {
		perror("Error opening file");
	     
		                 }
 while( fgets (line, sizeof(line),infile)!=NULL ) 
			 {
			   token = strtok(line, ",");/* get the first token */
		     while( token != NULL )/* walk through other tokens */
				  {
				                               //printf( " %s\n", token );
				                                node[a].id = atoi(token);
						               token = strtok(NULL, ",");
						               node[a].left_id = atoi(token);
						               token = strtok(NULL, ",");
						               node[a].right_id= atoi(token);
						               token = strtok(NULL, ",");
						               node[a].up_id= atoi(token);
						               token = strtok(NULL, ",");
						               node[a].down_id= atoi(token);
						               token = strtok(NULL, ",");
						               a++;
				 }
			}
  for(j1=0;j1<12;j1++)
		    {
		      //printf("Node elements: id %d left_id %d right_id %d up_id %d down_id %d\n",node[j1].id,node[j1].left_id,node[j1].right_id,node[j1].up_id,node[j1].down_id);
		    }


fclose(infile);
  
}

