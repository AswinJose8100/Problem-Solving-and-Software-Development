#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class TomekPhone
{
public:
	int minKeystrokes(vector<int> frequencies, vector<int> keySizes)
	{
		vector<int> newvec;// new empty vector
		int l;
		l=0;

		int final;
		final=0;

		while(l<keySizes.size())
		{
			int m;
			m=0;

			while(m<keySizes.at(l))
			{
				newvec.push_back(m+1);// appending to the vector
				m=m+1;
			}

			l=l+1;//incrementing loop index
			
		}

		sort(newvec.begin(),newvec.end());
		// sorting vector in asc order from begin to end
		sort(frequencies.begin(),frequencies.end());
		// reverse the order in which they were stored
		reverse(frequencies.begin(),frequencies.end());

		if(frequencies.size()>newvec.size())
		{
			return -1;
		}

		l=0;

		while(l<frequencies.size())
		{
			final=final+(frequencies.at(l)*newvec.at(l));
			l=l+1;
		}

		return final;



	}

};
