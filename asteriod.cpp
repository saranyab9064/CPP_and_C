//============================================================================
// Name        : asteriod.cpp
// Author      : Saranya Balakrishnan
// G.I.D       : 5
// SJSU ID     : 013786097
// Description : struct_vectors in C++, Ansi-style
//============================================================================

/*
Space and Time complexity
*************************
Time complexity :O(n) for array access and search;Space complexity :O(n^2) as worstcase;

Test cases
***********
test_case_1
***********
   a.at(0).m=5;
   a.at(0).d=direction::right;
   a.at(1).m=5;
   a.at(1).d=direction::left; //hit is 0

test_case_2
***********
   a.at(0).m=2;
   a.at(0).d=direction::left;
   a.at(1).m=1;
   a.at(1).d=direction::left;
   a.at(2).m=1;
   a.at(2).d=direction::right;
   a.at(3).m=2;
   a.at(3).d=direction::right; //hit is 2

test_case_3
***********
   a.at(0).m=100;
   a.at(0).d=direction::right;
   a.at(1).m=70;
   a.at(1).d=direction::left;
   a.at(2).m=40;
   a.at(2).d=direction::left; //hit is 1

test_case_4
***********
   a.at(0).m=5;
   a.at(0).d=direction::right;
   a.at(1).m=8;
   a.at(1).d=direction::right;
   a.at(2).m=10;
   a.at(2).d=direction::right;
   a.at(3).m=12;
   a.at(3).d=direction::left; //hit is 0

test_case_5 invalid input
***********
   a.at(0).m=-5;
   a.at(0).d=direction::right;
   a.at(1).m=8;
   a.at(1).d=direction::right;
   a.at(2).m=10;
   a.at(2).d=direction::right;
   a.at(3).m=12;
   a.at(3).d=direction::left; //hit is 0 // invalid input

test_case_6
***********
   a.at(0).m=5;
   a.at(0).d=direction::right;
   a.at(1).m=10;
   a.at(1).d=direction::right;
   a.at(2).m=5;
   a.at(2).d=direction::left; //hit is 2

test_case_7
***********
   a.at(0).m=2;
   a.at(0).d=direction::right;
   a.at(1).m=1;
   a.at(1).d=direction::right;
   a.at(2).m=1;
   a.at(2).d=direction::left;
   a.at(3).m=2;
   a.at(3).d=direction::left; //hit is 0

test_case_8
***********
   a.at(0).m=2;
   a.at(0).d=direction::left;
   a.at(1).m=1;
   a.at(1).d=direction::left; //hit is 0

test_case_9
***********
   a.at(0).m=1;
   a.at(0).d=direction::right;
   a.at(1).m=1;
   a.at(1).d=direction::right; //hit is 2

test_case_10
***********
   a.at(0).m=-1;
   a.at(0).d=direction::right;
   a.at(1).m=-1;
   a.at(1).d=direction::right; //hit is 0 //invalid input
 */

#include <iostream>
#include <vector>
#include "asteriod.h"

using namespace std;

int countHits(std::vector<Asteriod>a)
{
   int max=0;
   int n=a.size();
   int no_of_hit=0;
   for(int i=n-1;i>=0;i--){
     if((a.at(i).m>max)&&(a.at(i).d==1))
        {
        	no_of_hit++;
        	max=0;
        }
     else if((a.at(i).m>max)&&(a.at(i).d==0))
        {
        	max=a.at(i).m;
        }
   }
   return no_of_hit;
   }
int main()
{
    vector<Asteriod>a(12);
    //test_case_1
    a.at(0).m=-2;
    a.at(0).d=direction::right;
    a.at(1).m=-2;
    a.at(1).d=direction::right;
    a.at(2).m=200;
    a.at(2).d=direction::right;
    a.at(3).m=155;
    a.at(3).d=direction::right;
    a.at(4).m=17;
    a.at(4).d=direction::left;
    a.at(5).m=72;
    a.at(5).d=direction::left;
    a.at(6).m=2;
    a.at(6).d=direction::right;
    a.at(7).m=91;
    a.at(7).d=direction::right;
    a.at(8).m=10;
    a.at(8).d=direction::left;
    a.at(9).m=64;
    a.at(9).d=direction::left;
    a.at(10).m=28;
    a.at(10).d=direction::right;
    a.at(11).m=19;
    a.at(11).d=direction::right;


    int hit;
    hit=countHits(a);
    cout<<hit<<endl;
    return 0;
}


