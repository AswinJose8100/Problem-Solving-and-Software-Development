#include <iostream>
#include <vector>

using namespace std;

class ProjectPairs
{
public:
	int minDiff(vector<int> practice)
	{
		vector<int> v;
		v=practice;
		int i;
		int j;
		int sum;
		sum=0;
		int min;
		int diff;

		for(i=0;i<practice.size();i++)
		{
			for(j=1;j<practice.size();j++)
			{
				sum1=practice[i]+practice[j];
				sum2=practice[i+1]+practice[j+1];
				diff=abs(sum1-sum2);
				
			}
		}

	}
}