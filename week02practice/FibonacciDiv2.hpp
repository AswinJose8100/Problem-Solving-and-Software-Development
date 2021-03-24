#include <iostream>

using namespace std;

class FibonacciDiv2{
public:
	int find(int N){
		int val_1= 0;
		int val_2=1;
		int temp;
        while(val_2<N)
        {
          temp=val_1+val_2;
          val_1=val_2;
          val_2=temp;
        }
        int num1=N-val_1;
        int num2=val_2-N;
        if(num1<num2)
        	return num1;
        else
        	return num2; 
    }
	
};