#include <iostream>

using namespace std;

class HandsShaking
{
public:

	long countPerfect(int size)
	{
        int l;
        int no;
		long arr[120];
		arr[0]=1;
		l=1;
		long val;
		

		while(l<=(size/2))
		// Loop goes from index 1 to less than or equal to half the length of value
		// given as parameter.	
		{
			arr[l]=0;
			int m;
			m=0;

			while(m<l)
			{
				
				arr[l]=arr[l]+(arr[m]*arr[l-m-1]);

				m=m+1;
			}

			l=l+1;
		}

		val=arr[size/2];

		return val;


	}

};