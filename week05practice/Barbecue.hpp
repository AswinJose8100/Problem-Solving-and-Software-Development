#include <iostream>
#include <vector>

using namespace std;

class Barbecue
{

public:

	int eliminate(int size, vector<int> voter, vector<int> excluded)
	{
		int j=0;
		vector<int> vec1;
		int final;
		vector<int> vec2;

		while(j<size)
		{
			// pushing value 0 in the vectors
			vec1.push_back(0);
			vec2.push_back(0);

			j=j+1;
		}

		j=0;

		while(j<voter.size())
		{
			vec1.at(voter.at(j))=vec1.at(voter.at(j))+1;
			vec2.at(excluded.at(j))=vec2.at(excluded.at(j))+1;

			j=j+1;
		}

		final=0;
		j=1;

		while(j<vec2.size())
		{
			if(vec2.at(j)==vec2.at(final))
			{
				if(vec1.at(j)>vec1.at(final))
				{
					final=j;
				}
			}

			if(vec2.at(j)>vec2.at(final))
			{
				final=j;
			}

			j=j+1;
		}

		return final;

	}

};