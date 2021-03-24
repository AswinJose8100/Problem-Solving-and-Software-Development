#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
class AzimuthMonitoring {
public:
 
 int getAzimuth(vector<string> instructions) {
  int total=0;
  int j=0;
  int length=instructions.size();
  while(j<length){

    if(instructions[j][0]=='T'){
      total=total+180;
    }

    else if(instructions[j][0]=='H'){
    	break;

    }
        
    else if(instructions[j].length()==4 ||instructions[j].length()==5){

      if(instructions[j][0]=='R'){
        total=total+90;
      }

      else{
        total=total-90;
      } 

    }
    
    else {
      istringstream input(instructions[j]);
      string str; 
      int value;
      input >> str >> value;
      if(str[0]=='R'){ 
        total=total+value;
      }  

      else{
      	total=total-value;

      }

    }
    j++;
  }
  
  while(total<0){
  	total=total+360;

  }
    
  return total%360;
}

};