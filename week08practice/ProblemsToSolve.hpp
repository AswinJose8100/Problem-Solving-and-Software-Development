#include <iostream>
#include <vector>

using namespace std;

class ProblemsToSolve
{
public:
	int minNumber(vector<int> pleasantness, int num)
	{
		int l;
		int m;
		int length;
		int val;
		int no1;
		int no2;

		l=0;
		length=pleasantness.size();// Gets the length of the vector

		int final;
		final=length;

		while(l<length)
		{
			m=l+1;

			while(m<length)
			{
				if(pleasantness.at(m)-pleasantness.at(l)<0)
					val=(pleasantness.at(m)-pleasantness.at(l))*-1;
				else
					val=pleasantness.at(m)-pleasantness.at(l);
				if(val>=num)
				{
					int s;
					s=2;

					if(l>0)
					{
						no1=(l+1)/2;
						s=s+no1;
					}

					no2=(m-l-1)/2;
					s=s+no2;

					if(s<final)
					{
						final=s;
					}
				}

				m=m+1;// increnenting index of while loop
				
			}

			l=l+1;
		}

		return final;
	}
};