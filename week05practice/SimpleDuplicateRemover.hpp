#include <iostream>
#include <map>
#include <vector>

using namespace std;

class SimpleDuplicateRemover
{
public:

	vector<int> process(vector<int> sequence)
	{
		map<int,int> val;
		
		int j=0;

		while(j<sequence.size())
		{
			val[sequence.at(j)]=val[sequence.at(j)]+1;
			j++;
		}
        vector<int> final;
		j=0;

		while(j<sequence.size())
		{
			val[sequence.at(j)]=val[sequence.at(j)]-1;

			if(!val[sequence.at(j)])
			{
				final.push_back(sequence.at(j));

			}
			j++;

		}

		return final;
	}
};