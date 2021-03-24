#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class PrefixFreeSets
{
public:

  int maxElements(vector<string> vec)
  {
    int final;
    int length;
    length=vec.size();
    final=length;
    int l;
    int m;
   
    // Sorts the array from beginning till the end.
    sort(vec.begin(),vec.end());
    l=0;
    int len;
    len=length-1;

    while(l<len)
    {
      // Substr gets the small part of the string at a particular vector index.
      if(vec.at(l+1).substr(0,vec.at(l).length())==vec.at(l))
      {
        final=final-1;
      }

      l=l+1;

    }

    return final;

  }

};