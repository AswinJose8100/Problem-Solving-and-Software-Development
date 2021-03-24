#include<bits/stdc++.h> 

using namespace std;

class DifferentStrings
{
public:
	int minimize(string str1,string str2)
	{
		int l;
		int m;
		int size_1;
		int size_2;
		int small;

		size_1=str1.length();// gets the length of string str1
		l=0;
		size_2=str2.length();// gets the length of string str2
		small=INT_MAX;

		while(l+size_1<=size_2)
		{
            int counter;
            counter=0;
			m=0;

			while(m<size_1)
			{
				int val1=str1[m];
				int val2=str2[l+m];

				if(val1!=val2)
				{
					counter=counter+1;
				}

				m=m+1;// incrementing loop index

			}

			if(counter<small)
				small=counter;

			l=l+1;// incrementing loop index

		}

		return small;
	}
};