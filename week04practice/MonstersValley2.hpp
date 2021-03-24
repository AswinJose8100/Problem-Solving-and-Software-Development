#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class MonstersValley2
{

public:

	int minimumPrice(vector<int> dread, vector<int> price)
	{
		int j;
		int length=dread.size();
		int val=2*length;
		j=0;


        // Here in this is case 1<<length) the binary representation of 1 shall be left shifted
        // by the value of the variable length.
                                       
        while(j<(1<<length))
            
        {
        	int no2=0;
        	int no1=1;
        	long add=0;
        	int k=0;

            while(k<length)

            {
            	if(j&(1<<k))

            	{
            	 no2=no2+price.at(k);
            	 
            	 add=add+dread.at(k);
            	} 
            	
                else
                {
                	if(add < dread.at(k))

                	{
                		no1=0;

                        break; // comes out of the while loop
                    }
                }
                
                k++;
            }
            
            if(no1)

            {
                // Determinig the minimum value among no2 and val.

                if(no2<val){
                    val=no2;
                }
                else
                {
                    val=val;
                }
            }
            
            j++;
        }

        return val;
	}
};