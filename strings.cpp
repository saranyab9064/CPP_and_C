//============================================================================
// Name        : string_mix.cpp
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
// Description : String mix for all characters in C++, ANSI-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

// Function prototype declaration
string mix(string a,string b);

// Function definition
string mix(string a,string b)
{   
    using namespace std;
	string str3="";
    int i=0,j=0;
    //condition to append character by character in the string
    if(a.length()<b.length())
      {
        while((i<a.length())||(j<b.length()))
        {
        	if(i<a.length())
        	  str3=str3+a[i++];
        	if(j<b.length())
        	  str3=str3+b[j++];
        }
     }
    else
      {
        while((i<a.length())||(j<b.length()))
        {
        	if(i<a.length())
        	  str3=str3+a[i++];
        	if(j<b.length())
        	  str3=str3+b[j++];
        }
      }
    return str3;
}


