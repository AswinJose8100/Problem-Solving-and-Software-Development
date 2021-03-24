#include <iostream>
#include <string>

using namespace std;

class LotteryTicket
{
public:
	string buy(int cost, int no_1, int no_2, int no_3, int no_4)
	{
			string a1="IMPOSSIBLE";
			string a2="POSSIBLE";

        
        // Checking conditions and returning the appropriate string.
		if(no_1==cost||no_2==cost||no_3==cost||no_4==cost)
			return a2;
        
        else if((no_1+no_2+no_3+no_4)==cost)

        	return a2;

        else if((no_2+no_1)==cost||(no_3+no_1)==cost||(no_1+no_4)==cost
        	||(no_2+no_3)==cost||(no_4+no_2)==cost||(no_3+no_4)==cost)

        	return a2;

        else if((no_1+no_3+no_2)==cost||(no_2+no_3+no_4)==cost||
        	(no_1+no_3+no_4)==cost||(no_4+no_2+no_1)==cost)

        	return a2;

        // else block will return IMPOSSIBLE
        else
        	return a1;
	}
};