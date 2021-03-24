#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SquareOfDigits{
public:
    int getMax(vector<string> vec){
       int j,arr,k;
       int final=0; 
       j=0;
       
       while(j<vec.size()){

         arr=0;
         while(arr<vec[0].length()){

           for(k=0;;k++) 
           { 
             if((j+k)>=vec.size() || (arr+j)>=vec[0].length())

              break; 

             if((vec[j][arr]==vec[j+k][arr]) 
                && (vec[j][arr]==vec[j+k][arr+k])
                && (vec[j][arr]==vec[j][arr+k])){

                if((k+1)*(k+1)>final){
                  final=(k+1)*(k+1); 
                }
             }   
           }
           arr++; 
         }
         j++; 
       } 
       return final;
    }
}; 