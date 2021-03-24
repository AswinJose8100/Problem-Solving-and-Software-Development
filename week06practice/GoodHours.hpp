#include <iostream>
#include <vector>

using namespace std;

class GoodHours
{
public:
	int howMany(string beforeTime, string afterTime)
	{
		int final=0;
		vector<int> vec1;
		vector<int> vec2;

		// here -'0' is done for the conversion
		vec1.push_back((beforeTime[0]-'0')*10+(beforeTime[1]-'0'));
		vec2.push_back((afterTime[0]-'0')*10+(afterTime[1]-'0'));
		vec1.push_back((beforeTime[3]-'0')*10+(beforeTime[4]-'0'));
		vec2.push_back((afterTime[3]-'0')*10+(afterTime[4]-'0'));

		while(1)
		{
			bool ans=false;
			int l=0;

			int arr[4];
			
			arr[3]=vec1.at(1)%10;

			arr[1]=vec1.at(0)%10;

			arr[2]=vec1.at(1)/10;

			arr[0]=vec1.at(0)/10;
		
			while(l<3)
			{
				int m;
				int a=1;
				int b=1;
				m=0;
				
				while(m<4)
				{
					if(m<=l)
					{
						a=a*arr[m];
					}
					else
					{
						b=b*arr[m];
					}
					m++;
				}
				if(a==b)
				{
					ans=true;
				}
				l++;
				
			}
			if(ans)
			{
				final=final+1;
			}
			if(vec1==vec2)
			{
				break;
			}

			vec1.at(1)+=1;

			if(vec1.at(1)==60)
			{
				vec1.at(1)=0;
				vec1.at(0)+=1;

				if(vec1.at(0)==24)
				{
					vec1.at(0)=0;
				}
			}
		}
		return final;

	}
};