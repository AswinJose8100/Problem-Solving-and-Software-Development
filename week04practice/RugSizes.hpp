#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class RugSizes
{
public:
	int rugCount(int size)
	{
		int l;
		int final=1;
		l=2;
		while(l<=sqrt(size)) // need to include header file <math.h> for sqrt function.
		{
			if(size%l==0)
			{
				if(l%2==0&&(size/l)%2==0)
				{
					if(l*l==size)
					{
						final=final+1;

					}
					
				}
                else
                {
                	final=final+1;
                }

            }
            l=l+1;
        }

        return final;

	}

};
