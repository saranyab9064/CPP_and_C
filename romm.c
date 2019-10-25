#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mesh.c"
#include "route.c"
#include "input.c"


extern void mesh_topo();
extern void input();
extern void route();

int main()
{
int row;
int col;
int i;
int j;
int n,k=1;
int src[20][20];
int adj[20][20];
int dest[4];
int pro[200];
FILE *fp;
int i1,j1;
int src1,src2,dst1,dst2;


printf("enter the no of rows and col: \n");//user input 
scanf("%d %d",&row,&col);

for (i=0;i<row;i++){
    for (j=1;j<=col;j++){
			pro[k] = i*10+j; 
			src[i][j]=pro[k];  
			printf("src[%d][%d] = %d,k= %d\n",i,j,pro[k],k);
			k++;
			}
                      }

k= row*col;    
for (i=1;i<=k;i++) //iteration for getting the left,right,up,down node for mesh connection
     {
		//printf("pro[%d]= %d",i,pro[i]);		
		dest[1] = pro[i]-1;
		dest[2] = pro[i]+1;	
		dest[3] = pro[i]+10;
		dest[4] = pro[i]-10;
		printf("pro[%d] = %d,dest[1]= %d,dest[2]= %d,dest[3]= %d,dest[4]= %d\n",i,pro[i],dest[1],dest[2],dest[3],dest[4]);
                            if ((dest[1]<0)||(dest[1]%10==0))
				   {
                                  dest[1]=0;
	                           }
		     
					        if ((dest[2]<0)||(dest[2]%10>col))
						   {
				                  dest[2]=0;
					           }
					         if (dest[3]<0||dest[3]>pro[row*col])
						   {
				                  dest[3]=0;
					           }
				                if (dest[4]<0)
				                  {
				                  dest[4]=0;
                                                   }
		                    
fp=fopen("mesh1.txt", "a+");
//printf("pro[%d] = %d,dest[1]= %d,dest[2]= %d,dest[3]= %d,dest[4]= %d\n",i,pro[i],dest[1],dest[2],dest[3],dest[4]);
fprintf(fp,"%02d,%02d,%02d,%02d,%02d\n",pro[i],dest[1],dest[2],dest[3],dest[4]);
fclose(fp);
    }

mesh_topo();

//iteration for getting the source and destionation-input file

	for(i1=1;i1<=k;i1++){
		 src1=pro[i1]/10;
		 src2=pro[i1]%10;
		for (j1=1;j1<=k;j1++){
			 dst1=pro[j1]/10;
			 dst2=pro[j1]%10;
			//printf("src1=%d,src2=%d,dest1= %d,dest2=%d\n",src1,src2,dst1,dst2);
fp=fopen("input.txt", "a+");
fprintf(fp,"%d,%d,%d,%d\n",src1,src2,dst1,dst2);
fclose(fp);
			            }
		          }


input();	
}        
  
