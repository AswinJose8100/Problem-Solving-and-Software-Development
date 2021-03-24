#include<bits/stdc++.h> 
using namespace std;

vector<int> vec1;

class HouseBuilding
{
public:
	int func(int num)
	{
		int l;
		int length1;
		int counter;
		int val1;
		int val2;

		length1=vec1.size();
		counter=0;
		l=0;

		while(l<length1)
		{
			// This is to determine the absoulute value

			if(vec1.at(l)-num<0)
				val1=-1*(vec1.at(l)-num);
			else
				val1=vec1.at(l)-num;

			if(vec1.at(l)-num-1<0)
				val2=-1*(vec1.at(l)-num-1);
			else
				val2=vec1.at(l)-num-1;

			counter=counter+min(val1,val2);// min gets the minimum value among val1 and val2
			l=l+1;

		}

		return counter;

	}

	int getMinimum(vector<string> vec2)
	{
		int a;
		int final;
		
		final=INT_MAX;

		a=0;

		vec1.clear();

		while(a<vec2.size())
		{
			int b;
			b=0;

			while(b<vec2[a].length())
			{
				vec1.push_back(vec2[a][b]-'0');// appends to vector
				b=b+1;
			}

			a=a+1;
		}

		sort(vec1.begin(),vec1.end());// sorts the vector vec1 from begining to end
		a=0;

		while(a<=9)
		{
			final=min(final,func(a));// gets the minimum value

			a=a+1;
		}

		return final;

	}
	
};
