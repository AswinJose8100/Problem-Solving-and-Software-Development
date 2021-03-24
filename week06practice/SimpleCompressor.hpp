#include <iostream>
#include <string>
using namespace std;

class SimpleCompressor
{
public:
	string uncompress(string data)
	{
	 string final="";
	 int l;
	 l=0;	

	 while(l<data.length())
     {
	 	if(data[l]!='[')
        {
        	final=final+data[l];
        } 

        else
        {
        	int counter=0;
        	string opt= "";
        	int a=-1;

            for(l=l+1;data[l]!=']'||counter;l=l+1)
            {
            	if(data[l]=='[')
            	{
            		counter=counter+1;
            	}

                else if(data[l]==']')
                {
                	counter=counter-1;
                }

                if(a+1)
                {
                	opt=opt+data[l];

                }

                else
                {
                	a=data[l]-'0'; // - '0' is done for converting.
                }
            }
            
            // recursive call of function uncompress       
            opt=uncompress(opt);
            int j;
            j=0;

            while(j<a)
            {
            	final=final+opt;
                j=j+1;// Inccrementing the index
            }
        }
        
        l++;

     }
     return final;

	}
};
