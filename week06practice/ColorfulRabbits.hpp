#include <iostream>
#include <map>
#include <vector>

using namespace std;

class ColorfulRabbits
{
public:
	int getMinimum(vector<int> replies)
	{
		int final=0;
		// variable length stores the size of the vector replies
		int length=replies.size();
		int l;
		// using map
		map<int,int> j;
		l=0;

		while(l<length)
		{
			j[replies.at(l)]=j[replies.at(l)]+1;
			l=l+1; 
		}
		
		map<int,int>::iterator m=j.begin();

		while(m!=j.end())
		{
			int var=m->first+1;

			final=final+(m->second/var)*var; 

			if(m->second%var!=0)
			{
				final=final+var;
			}
			m++;
		}

		return final;

	}
};