#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

class ThrowTheBall{
private:
	vector<int> value_player;
	int player,counter;
public:
	int timesThrown(int N,int M,int L){
		player=1;
		counter=0;
		if(N<3)
			N=3;
		if(N>50)
			N=50;
		if(M<1)
			M=1;
		if(M>50)
			M=50;
		if(L<1)
			L=1;
		if(L>N-1)
			L=N-1;
		value_player.resize(0);
		for(int k=0;k<N;k++)
			value_player.push_back(0);
		value_player[0]=1;
		while(true){
			if(value_player[player-1]>=M)
				return counter;
			else{
				if(value_player[player-1]% 2==0){
					player+=L;
					if(player>N)
						player-=N;
				}
				else{
					player-=L;
					if(player<1)
						player+=N;
				}
			}
			value_player[player-1]=value_player[player-1]+1;
		    counter++;

		}


	}
};