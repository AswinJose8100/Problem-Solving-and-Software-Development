#include <iostream>
#include <stdio.h>

using namespace std;

class Truckloads{
    
public:
    
    int numTrucks(int Cratesnum, int size_of_load)
    {
     if(Cratesnum<=size_of_load) return 1;
     else
     {
        if(Cratesnum%2==0) return 2*numTrucks(Cratesnum/2,size_of_load);
        
        else return numTrucks((Cratesnum/2)+1,size_of_load)+numTrucks((Cratesnum/2),size_of_load);
        
      }
    
    }

};
