/*******************************************************************************************************/
/*          Name: Saranya Balakrishnan                                                G.I.D: 5         */
/*          SJSU ID: 013786097                                                                         */
/*          Course :180 A                                                                              */
/*          Dept:CMPE  HomeWork=1                                                                      */
/*******************************************************************************************************/
#include<iostream>
#include<iomanip>
#include<fstream>
#include <sstream>

using namespace std;

int main()
{  
  //get the input file name
  cout<<"Input file:"<<endl;
  string input_file;
  cin>>input_file;
  ifstream inFile(input_file);
  string name;
  string label;
  string small_label;
  string large_label;
  float small_val=10000000.0;
  float large_val=0.0;
  float value;
  //try to open the file name and read line by line
    if(inFile.is_open())
      {     
       while(getline(inFile,name))
        { 
         stringstream temp;
         temp.str(name);
         temp>>label;       
         temp>>value;
         //find the smallest and largest value from the input file

        if(value>large_val)
           { 
             large_val=value;
             large_label=label;
           }
        if(value<small_val)
           { 
             small_val=value;
             small_label=label;
           }
        } 
    cout<<std::left<<setw(50)<<small_label<<std::right<<setw(12)<<std::fixed<<setprecision(2)<<small_val<<endl;  
    cout<<std::left<<setw(50)<<large_label<<std::right<<setw(12)<<std::fixed<<setprecision(2)<<large_val<<endl;
    inFile.close();
      }          
    else
	cout<<"file is not in the location or not able to open it"<<endl;
 return 0;
}

