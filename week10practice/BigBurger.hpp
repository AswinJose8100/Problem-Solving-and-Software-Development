#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class BigBurger
{
public:

    int maxWait(vector<int> vec1,vector<int> vec2)
    {
      int m;
      int final;
      int vec1_size;
      int val;
      int num_1;
      int num_2;
      int num_3;

      m=1;
      final=0;
      vec1_size=vec1.size();// gets the length of the vector

      while(m<vec1_size)
      {
        num_2=vec2.at(m-1);
        num_1=vec1.at(m-1);

        val=num_1+num_2;

        num_3=val-vec1.at(m);
        
        final=max(final,num_3);// assigns the maximum value among final and num_3
        vec1.at(m)=max(vec1.at(m),val);// assigns the maximum value among vec1 at index m and num_3

        m=m+1;// incrementing loop index

      }
 
      return final;
    }

};