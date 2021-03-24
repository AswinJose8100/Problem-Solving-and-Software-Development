#include <iostream>
#include <string>

 
using namespace std;
 
class StreetParking
{
public:
  int freeParks(string street)
  {
    int array[55],j,total_park;
    j=0;
    while(j<55){

      array[j]=1;
      j++;
    }
    
    j=0;  
    while(j<street.length())
    {
      if (street[j]=='B')
      {
        array[j]=0;
        if (j-1>=0){
         array[j-1]=0;
        }
        if (j-2>=0){ 
          array[j-2]=0;
        }  
      }
      if (street[j]=='S')
      {
        array[j]=0;
        if (j-1>=0){
          array[j-1]=0;
        }  
        if(j+1 < street.length()){
          array[j+1]=0;
        }  
      }
      if (street[j]=='D'){
        array[j]=0;

      }
    j++;   
    }

    total_park=0;
    j=0;

    while(j<street.length()){

     if(array[j]==1){
      total_park++;
     }

     j++; 

    }

    return total_park;

  }
};