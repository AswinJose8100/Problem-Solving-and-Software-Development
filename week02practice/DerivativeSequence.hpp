#include <iostream>
#include <vector>

using namespace std;

class DerivativeSequence{
public:
	vector<int> derSeq(vector<int> b, int n){
		int i;
    int j;
		int val;
    i=0;
		while(i<n){ 
          vector<int> vec;
          j=0; 
          while(j<b.size()-1) 
          { 
            val=b[j+1]-b[j]; 
            vec.push_back(val);
            j++; 
          }
          b=vec;
          i++;
    } 
        
    return b; 
    } 
};
