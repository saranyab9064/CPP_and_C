#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void route (int source1,int source2,int dest1,int dest2)
{
  FILE *infile;
  char line[40];
  const char s[2] = ",";//for comma separator
	char *token;
	int a=0;
	int j1=0;	
        int i=0;
        int step_size1,step_size2;
	int count=0;
	int source[441];	
	int current_node;
        int dest;
        int sourcer=source1*10+source2;
        int var1,var2,var3;
        int temp1,temp2,temp3,temp4;//for romm logic 
        int previous_node,i_node;
        int inter_node[441];
        int k,l,m;
	int p_node;
        //printf("temp_size: (%d,%d)\n",temp_size1,temp_size2);
        //printf("step_size: (%d,%d)\n",step_size1,step_size2);
          

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

//romm routing

        step_size1=abs(dest1-source1);
	step_size2=abs(dest2-source2);
	var1=(step_size1*10+step_size2);
        var2=(dest1*10+dest2);
        var3=(abs(var2/10));
        temp1=(var1%10)+1;
        temp2=((var1/10)-1)*temp1;
        temp3=(var1%10)*2;
        temp4=temp2+temp3;//denominator for matrix//total no of nodes between src & dest

//to find the individual label node in between from src & dest(intermediate node to do routing)


for (k=0;k<var3;k++){
	i_node=sourcer;
	if (i_node<var2){ 
	i_node=sourcer+10; 
	inter_node[count]=i_node;
        sourcer= inter_node[count];
	count=count+1; } 
	printf("sourcer: %d\n",sourcer); 
	}
		        


fclose(infile);
  
}

