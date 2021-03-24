#include <iostream>

using namespace std;

class RockStar
{
public:
	int getNumSongs(int val1,int val2,int val3,int val4)
	{
		int small1;
		int small2;
		int final;
		final=0;


		if(val1>0||val2>0)
		{
			final=final+val1;

			if(val2>0)
			{
				// Finding minimum among val2 and val3
				if(val2<val3)
					small1=val2;
				else if(val3<val2)
					small1=val3;
				else
					small1=val2;
				final=final+(small1*2);

				if(val2>val3)
				{
					final=final+1;
				}
				final=final+val4;
			}
		}

		else
		{
			// Finding minimum among 1 and val3
			if(val3<1)
				small2=val3;
			else
				small2=1;

			final=val4+small2;
		}

		return final;
	}
};