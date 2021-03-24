#include <iostream>
#include <vector>

using namespace std;

class PaternityTest
{
public:

  vector<int> possibleFathers(string str1, string str2 , vector<string> vec )
  {
    int counter;
    vector<int> final;
    int l;
    int m;

    l=0;

    while(l<vec.size())
    {
      counter=0;
      m=0;

      while(m<str1.length())
      {

        if(str1[m]!=vec[l][m])
        {
          if(str1[m]!=str2[m])
          {
            break; // comes out of the loop
          }
        }

        else
        {
          counter=counter+1;
        }

        m++;
      }

      if(m==str1.length()&&counter>=vec.at(0).length()/2)
      {
        final.push_back(l);// value stored in l will be appended into vector final.
      }
      l++;

    }
    return final;
  }
};