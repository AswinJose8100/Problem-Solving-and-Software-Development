#include <iostream>
#include <stdlib.h> 

using namespace std;

class MinimalDifference
{
public:

	int findNumber(int no1, int no2, int no3)
	{
		int add=0;
    int value;

		do
    {
      add=add+no3%10;
      no3=no3/10;
    }
    while(no3>=10);
        
    add=add+no3;

    int small;
    small=10e8;
    int l;
    int final;
    l=no1;

    while(l<=no2)
    {
      int a=0;
      int m=l;  
        
      // do-while loop
      do
      {
        a=a+m%10;
        m=m/10;

      }
      while(m>=10);

      a=a+m;
      value=abs(a-add);// Get the absolute value of a-add

      if(value<small)
      {
        final=l;
        small=abs(a-add);

      }

      l=l+1;// Incrementing while loop index
    }

    return final;
  }
};