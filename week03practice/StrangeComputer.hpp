#include <iostream>
#include <string>


using namespace std;

class StrangeComputer{

public:

	int setMemory(string mem){

		int j=0;int val=0;
	    int charac='0';

        while(j<mem.length())
        {
        	if(mem[j]!=charac)
    	    {
    	    	charac=mem[j];
    		    val++;
            }
            j++;
        }


    return val;

	}
};