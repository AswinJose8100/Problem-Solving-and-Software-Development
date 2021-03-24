#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class DownloadingFiles
{
public:
	double actualTime(vector<string> tasks)
	{
		int l;
		double val1=0;
		int m;
		double val2=0;
		int product;
		int n;
		l=0;

		while(l<tasks.size())
		{
			istringstream a(tasks.at(l));// Used this which i had learned from adds.

            a>>m>>n;

            product=m*n;

            val2=val2+product;

            val1=val1+m;

            l=l+1;// incrementing index for the while loop
		}

		double final=val2/val1;// storing the result in variable final. 

		return final;
	}

};
