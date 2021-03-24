#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MooingCows{
public:
 int dissatisfaction(vector<string> vec) { 

    int j,k;
    int m,n,calc;
    int length=vec.size(); 
    int val = vec.at(0).length(); 
    int final = 9999999;  

    j=0;
    while(j<length){ 

      k=0;
      while(k<val)
      { 
        if(vec[j][k]=='C')
        { 

          calc=0;
          m=0;

          while(m<length){

            n=0;
            
            while(n<val){

              if(vec[m][n]=='C')
              { 
                calc=calc+(j-m)*(j-m)+(k-n)*(k-n); 
              }
              n++; 
            }
            m++; 
          } 
          if(calc<final)
            final=calc; 
          
        }
        k++; 
      } 
      j++;
    } 
    return final; 
  } 
   

}; 