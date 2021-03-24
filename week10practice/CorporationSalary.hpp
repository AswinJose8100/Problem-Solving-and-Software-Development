#include<bits/stdc++.h> 

using namespace std;

class CorporationSalary
{
public:
	vector<string> vec;
	long arr[100];
	int length;
	long value;
	int l;
	int m;
	int len;

	long func(int num)
	{
		int p; 
		
		if(arr[num]!=-1)
		{
			return arr[num];
		}

		p=0;
		arr[num]=0;

		while(p<length)
		{
			if(vec[num][p]=='Y')
			{
				arr[num]=arr[num]+func(p);// calling the function recursively.
			}

			p=p+1;
		}

		if(arr[num]==0)
		{
			arr[num]=1;
		}


		return arr[num];
	}
	
	
	long totalSalary(vector<string> relations)
	{
		value=0;
		vec=relations;
		l=0;
		len=sizeof(arr);
		m=0;
		length=vec.size();
	
// sizeof will return the size of the data type.
		memset(arr,-1,len);

		while(l<length)
		{
			if(arr[l]==-1)
			{
				func(l);// calling the function below
			}

			l=l+1;// incrementing loop index

		}

		while(m<length)
		{
			value=value+arr[m];

			m=m+1;

		}

		return value;

	}


};
