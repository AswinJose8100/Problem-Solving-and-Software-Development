#include <iostream>


using namespace std;

class UnsealTheSafe
{

public:
	long countPasswords(int val)
    
	{
		long arr[45][25]; 
        int l; 
        long final=0;   
       
        l=0;
        
        while(l<=9)

        // Assigning value 1 at the array with row 1 and columns from 0-9    

        {
        	arr[1][l]=1;
        	l=l+1; 
        }

        l=2;

        while(l<=val)

        {
        	arr[l][0]=arr[l-1][7]; 
           
            arr[l][1]=arr[l-1][2]+arr[l-1][4];

            arr[l][2]=arr[l-1][1]+arr[l-1][3]+arr[l-1][5]; 

            arr[l][3]=arr[l-1][2]+arr[l-1][6]; 

            arr[l][4]=arr[l-1][1]+arr[l-1][5]+arr[l-1][7];

            arr[l][5]=arr[l-1][2]+arr[l-1][4]+arr[l-1][6]+arr[l-1][8]; 

            arr[l][6]=arr[l-1][3]+arr[l-1][5]+arr[l-1][9]; 

            arr[l][7]=arr[l-1][4]+arr[l-1][8]+arr[l-1][0]; 

            arr[l][8]=arr[l-1][5]+arr[l-1][7]+arr[l-1][9]; 

            arr[l][9]=arr[l-1][6]+arr[l-1][8]; arr[l][0]=arr[l-1][7];

           
            l=l+1; // incrementing index l for while loop.

        } 
        
        
        l=0;

        while(l<=9)

        { 
        	// Sum of values in the array stored in final variable.

            final=final+arr[val][l]; 
        	l=l+1;

        } 

        return final; 
    } 

};