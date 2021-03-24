#include <iostream>

using namespace std;

class HenrysKey{
public:
	int howMany(string s){
		int rep_count=0;
		int length=s.length();
		int i=0;
		for(int j=1;j<length;j++){
			if(s[j]==s[i]){
				rep_count++;
			
			}
			i++;
			
		
		}
	    
	return length-rep_count;
	}

};
