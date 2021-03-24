#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class CubeStickers
{
public:

	string isPossible(vector<string> vec)
	{
		int l;
		int val;
		int length;

		sort(vec.begin(),vec.end());// Sorting vector in asc order from beginning till end

		val=2;
		length=vec.size();
		l=2;

		
		while(l<length)
		{
			if(vec.at(l)!=vec.at(l-1)||vec.at(l)!=vec.at(l-2))
			{
				val=val+1;
			}

			l=l+1;// Incrementing index of while loop
		}

		if(val>=6)
		{
			return "YES";
		}

		else
		{
			return "NO";
		}
	}
};