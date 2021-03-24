#include <iostream>
#include <vector>

using namespace std;

class Thimbles
{
public:
	int thimbleWithBall(vector<string> vec)
	{
		int l;
		int final;

		l=0;
		final=1;

        while(l<vec.size())

        {
        	int var1;
        	int var2;

        	sscanf(vec.at(l).c_str(),"%d-%d",
                &var1,&var2);

        	if(var1==final)
        	{
        		final=var2;

        	}

        	else if(var2==final)
        	{
        		final=var1;

        	}

        	
        	l=l+1;	
        }

        return final;
    }

};