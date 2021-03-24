#include <iostream>

using namespace std;

class Multiples
{
public:
	int number(int small, int big, int f)
	{
		int result=0;
		int j=small;

		while(j<=big){

			if(j % f == 0)
			{
				result=result+1;
			}

			j=j+1;
		}

		return result;
	}
};