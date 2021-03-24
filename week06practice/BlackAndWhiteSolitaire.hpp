#include <iostream>
#include <string>

using namespace std;

class BlackAndWhiteSolitaire
{
public:
	int minimumTurns(string firstCard)
	{
		int l;
		int counter1=0;
		int counter2=0;

		l=0;// index forgoing through string.

		while(l<firstCard.length())
		{
			if(l%2==0)
			{
				if(firstCard[l]!='W')
				{
                    counter1=counter1+1;// Incrementing counter1 by 1.
                }
            }
            else
            {
            	if(firstCard[l]!='B')
            	{
                    counter1=counter1+1;
                }
            }
            l=l+1;    
		}

		l=0;

		while(l<firstCard.length())
		{
			if(l%2==0)
			{
				if(firstCard[l]!='B')
				{
                    counter2=counter2+1;
                }
            }
            else
            {
            	if(firstCard[l]!='W')
            	{
                    counter2=counter2+1;
                }
            }

            l=l+1;
        }
        
        // Checking and returning the minimum among counter1 and counter2.
        if(counter1<counter2)
        {
        	return counter1;
        }

        else
        {
        	return counter2;
        }
    }    
};