#include<bits/stdc++.h> 

using namespace std;

class MatchNumbersEasy
{
public:

	string maxNumber(vector<int> vec,int value)
	{
			
		int l;
		int length;
		string opt;
		string final;
		string arr[51];

		length=vec.size();// Gets the size of the vector
		l=0;

		while(l<length)
		{
			arr[vec.at(l)]=char(l+'0');// changing to character
			l=l+1;// incrementing loop index

		}

		l=2;

		while(l<=value)
		{
			int m;
			m=1;

			while(m<=(l/2))
			{
				opt=arr[m]+arr[l-m];
				sort(opt.begin(),opt.end());// sorting the string
				reverse(opt.begin(),opt.end());// reverses the string

				if((opt.length()>arr[l].length()&&opt[0]!='0')||
					(opt.length()==arr[l].length()&&opt>arr[l]))
				{
					arr[l]=opt;
				}

				m=m+1;	

			}

			l=l+1;
		}

		final=arr[value];
		int num;

		num=count(final.begin(),final.end(),'0');

		if(num==final.length())
		{
			return "0";
		}

		else
		{
			return final;
		}
	}
};