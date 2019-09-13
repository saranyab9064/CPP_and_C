//============================================================================
// Name        : ShapeSorter.cc
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
//============================================================================
#include<iostream>
#include<vector>
#include "ShapeSorter.h"
using namespace std;
void ShapeSorter(vector<Shape*> &shapes)
{
	  for(int i=1;i<shapes.size();++i){
	  for(int j=0;j<shapes.size()-1;++j){
	      if(shapes[j]->area()>shapes[i]->area()) std::swap(shapes[j],shapes[i]);  } 	   
	}
	for(int i=0;i<shapes.size();i++){
          if(shapes[i]->area()){
	    cout<<shapes[i]->area()<<endl;}
       }
       
}
