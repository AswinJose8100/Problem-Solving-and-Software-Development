#include <iostream>

using namespace std;

class EggCartons{
public:
	int minCartons(int n){
		int x,y;
		if(n%2!=0)
			return -1;
		if(n%8==0)
			return n/8;
		if(n<6)
			return -1;
		if(n==10)
			return -1;
		x=4*(1-(n%8/8));
		y=(n/8)-(x-1);
		return x+y;
	}
};
