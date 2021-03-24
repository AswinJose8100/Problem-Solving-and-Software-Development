#include <iostream>
#include <string>
#include <vector>


using namespace std;
class CircularLine{

public:
 int longestTravel(vector<int> vec){
  int final=-1;
  int add=0;
  int j,min;
  j=0;
  while(j<vec.size()){
    add=add+vec[j];
    j++;
  }    
  for(j=0;j<vec.size();j++)
  
    for(int k=j+1;k<vec.size();k++)
    
    {
      int val=0;
      for(int m=j;m<k;m++)
        val=val+vec[m];
      if(val<(add-val)){
          min=val;
      }
      else{
          min=add-val;
      }
      if(min>final){
          final=min;
      }
      
    }
  return final;
 }
	
};
