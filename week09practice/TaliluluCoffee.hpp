#include<bits/stdc++.h> 

using namespace std;

class TaliluluCoffee
{
public:
	int maxTip(vector<int> vec)
	{ 
     
      int final;
      int l;
      int length;
      
      final=0;
      l=0;

      sort(vec.begin(),vec.end(),greater<int>());// sorting the vector
      length=(int)vec.size();// the length/size of the vecotr
      
      while(l<length)
      {
         // Finding the max value
         if(vec.at(l)-l>0)
            final=final+vec.at(l)-l;
         else
            final=final+0;
            
         l=l+1;// incrementing array index
      }     
      return final;
   }
};