#include <iostream>

using namespace std;

class FracCount{
	int great_cmmdiv(int no1,int no2){
		while(no1!=no2){
			if(no1<no2) no2=no2-no1;
			else no1=no1-no2;
		}
		return no1;
	}
	public:
		int position(int numerator, int denominator)
		{
			int counter=0;
			int val1=2;
			while(val1<=1000){
				int val2=1;
				while(val2<val1){
					if(great_cmmdiv(val1,val2)==1) counter=counter+1;
					if(val1==denominator&&val2==numerator) return counter;
					
					val2++;
				}
				val1++;
			}
			return -1;
		}

};