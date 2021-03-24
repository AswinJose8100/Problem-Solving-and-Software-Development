#include <iostream>
#include <string>

using namespace std;

class RunLengthEncoding
{
public:
	string decode(string str)
	{
		int length=str.length();// The length of the string given in function parameter.
		string s;
		int l;
		int c;
		c=0;
		l=0;
		int m;

		while(l<length)
		{
			if(isdigit(str[l])) // chescking if it is a digit.
			{
				c=c*10+str[l]-'0';

				if(c>50)
				{
					return "TOO LONG";

				}
			}
			else
			{
				if(c==0)
				{
					c=1;
				}
				m=0;

				while(m<c)
				{
					s=s+str[l];
				
					m++;
				}
			    c=0;

			}

			if(s.length()>50)
			{
				return "TOO LONG";
			}
			l++;	
		}
		return s;
	}
};