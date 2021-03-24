#include <iostream>

using namespace std;

class MakeSquares
{
public:
	int maxCount(int N)
	{
		int final;
		if(N==4)
			final=1;
		else
			final=N%4;

		return final;
	}
};