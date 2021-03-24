#include <iostream>
#include <vector>

using namespace std;

class KokoBananas
{
public:
	int lastHand(vector<int> hands,int k)
	{
		int big=hands[0];
		int c=0;
		int counter=0;
		int final;
		for(int i=1;i<hands.size();i++){
			if(hands[i]>hands[0]){
				big=hands[i];
				c=i;

			}

		}
		int j=1;
		int l=0;
		while(j>0){
			big=big-1;
			counter+=1;
			int c
			for(int i=0;i<hands.size();i++){
				if(hands[i]==big)
				{

					if(c<i)
						big=hands[c];
					else
						big=hands[i];
				
				}

				if(hands[i])	
			}

	


			}
			else 

			if(counter==(k-1))
				break;

		}
		
	}
}